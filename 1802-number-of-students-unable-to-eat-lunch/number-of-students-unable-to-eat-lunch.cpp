class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
        queue<int>q;
        for(int i=0;i<st.size();i++){
            q.push(st[i]);
        }
        int i=0;
        int count=0;
        while(!q.empty()&&count!=q.size()){
       
        if(q.front()==sd[i]){
            q.pop();
            i++;
            count=0;
        }else{
          q.push(q.front());
          q.pop();
          count++;
        }
    }
        return q.size();
    }
};