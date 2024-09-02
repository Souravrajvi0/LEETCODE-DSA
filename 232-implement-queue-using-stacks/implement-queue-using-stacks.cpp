class MyQueue {
public:
   stack<int>s1;
   stack<int>s2;
    void ib(stack<int>&st,int x){
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
            }
            st.push(x);
        for(int i=v.size()-1;i>=0;i--){
            st.push(v[i]);
        }
   }
   void reverse(stack<int> &st){
        if(st.size()==1)return;
        int top=st.top();
        st.pop();
        reverse(st);
        ib(st,top);
    }
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        reverse(s1);
        s2=s1;
        reverse(s1);
    }
    
    int pop() {
       int top=s2.top();
       s2.pop();
       if(s2.size()!=0){
       reverse(s1);
       s1.pop();
       reverse(s1);
       }else{
        s1=s2;
       }
       return top;
    }
    
    int peek() {
       return s2.top();
        
    }
    
    bool empty() {
        if(s2.size()==0)return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */