class MyCircularQueue {
public:
    int f;
    int b;
    vector<int>arr;
    int size;
    int cap;
    MyCircularQueue(int k) { // k is the capacity
      f=0;
      b=0;
      size=0;
      cap=k;
      vector<int>n(k);
      arr=n;
    }
    
    bool enQueue(int value) { 
        if(size==cap)return false;
        arr[b]=value;
        b++;
        if(b==cap)b=0;  // important
        size++;
        
        return true;
    }
    
    bool deQueue() {    // pop
         if(size<=0) return false;
         f++;
         if(f==cap)f=0;  // important
         size--;
         return true;
    }
    
    int Front() {
        if(size==0)return -1;
        return arr[f];
        
    }
    
    int Rear() {
        if(size==0)return -1;
        if(b==0)return arr[cap-1]; // important
        return arr[b-1];
        
    }
    
    bool isEmpty() {
        if(size==0)return true;
        else return false;
        
    }
    
    bool isFull() {
        if(size==cap)return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */