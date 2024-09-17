class Node{
    public:
   char data;
   bool terminal;
   unordered_map<char,Node*>children;
   Node(char data){
    this->data=data;
    this->terminal=false;
            }
   void maketerminal(){
    this->terminal=true;
   }

};
class Trie {
public:
    Node* root;
    Trie() {
    root=new Node('\0');
        
    }
    
void insert(string word) {
    Node *cur=root;
    for(int i=0;i<word.length();i++){
        char ch=word[i];
        if(cur->children.count(ch)){
            cur=cur->children[ch];
        }else{
            Node*temp=new Node(ch);
            cur->children[ch]=temp;
            cur=temp;
        }
    }
    cur->maketerminal();
 }
    
    bool search(string word) {
        Node*temp=root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(temp->children.count(ch)){
               temp=temp->children[ch];
            }else{
                return false;
            }
        }
        if(!temp->terminal){
            return false;
        }
        return true;
        
    }
    
    bool startsWith(string prefix) {
         Node*temp=root;
        for(int i=0;i<prefix.size();i++){
            char ch=prefix[i];
            if(temp->children.count(ch)){
               temp=temp->children[ch];
            }else{
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */