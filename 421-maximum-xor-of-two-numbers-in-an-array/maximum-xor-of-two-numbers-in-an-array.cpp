class trieNode{
    public:
    trieNode*links[2];
    trieNode(){
        for(int i=0;i<2;i++){
            links[i]=nullptr;
        }
    }
    bool containskey(int bit){
        return this->links[bit]!=nullptr;
    }
    trieNode*get(int bit){
        return this->links[bit];
    }
    void put(int bit,trieNode*temp){
         this->links[bit]=temp;
    };
};
class tries{
    private:
    trieNode*root;
    public:
    tries(){
        root=new trieNode();
      }
    void insert(int num){
        trieNode*temp=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(!temp->containskey(bit)){
            temp->put(bit,new trieNode());
            }
            temp=temp->get(bit);
        }
    }
    int givemax(int num){
        trieNode*temp=root;
        int maxnum=0;
        for(int i=31;i>=0;i--){
            int bit =(num>>i)&1;
            if (temp == nullptr) break; 
            if(temp->containskey(1-bit)){
               maxnum=maxnum|(1<<i);
               temp=temp->get(1-bit);
            }else{
                temp=temp->get(bit);
            }
        }
        return maxnum;

    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        tries* t=new tries();
        for(int i=0;i<nums.size();i++){
            t->insert(nums[i]);
        }
        int max=0;
        for(int i=0;i<nums.size();i++){
         int im=t->givemax(nums[i]);
         if(im>max){
            max=im;
         }
        }
        return max;
        
    }
};