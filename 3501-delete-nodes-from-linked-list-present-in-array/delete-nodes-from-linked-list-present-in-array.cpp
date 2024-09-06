/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(head!=NULL&&mp.find(head->val)!=mp.end()){
            if(mp[head->val]==0)mp.erase(head->val);
            head=head->next;
        }
         if (head == nullptr) {
        return nullptr;
         }
        ListNode*cur=head->next;
        ListNode*prev=head;
        while(cur!=NULL){
        if(mp.find(cur->val)!=mp.end()){
        prev->next=cur->next;
        cur=cur->next;
         }else{
           prev=cur;
           cur=cur->next;
          }
        }
        return head;
     }
 

    
};