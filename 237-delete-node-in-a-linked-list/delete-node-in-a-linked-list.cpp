/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode*cur=node->next;
      ListNode*prev=node;
        while(cur->next){
        int temp=cur->val;
        cur->val=prev->val;
        prev->val=temp;
        prev=cur;
        cur=cur->next;
        }
        int temp=cur->val;
        cur->val=prev->val;
        prev->val=temp;
        prev->next=NULL;
       

 }
};