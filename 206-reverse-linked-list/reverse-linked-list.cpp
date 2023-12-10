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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
      ListNode*temp=head;
      ListNode*prev=NULL;
      ListNode*cur=head;
      while(temp!=NULL){
      temp=temp->next;
      cur->next=prev;
      prev=cur;
      cur=temp;
      }
      return prev;
        
    }
};