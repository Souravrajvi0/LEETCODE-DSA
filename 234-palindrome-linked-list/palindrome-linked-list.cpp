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
     ListNode* findmid(ListNode* head){
         ListNode* slow=head;
         ListNode*fast=head;
         while(fast!=NULL){
             fast=fast->next;
             if(fast!=NULL){
                 fast=fast->next;
                 slow=slow->next;
             }
         }
         return slow;
     }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        if(head->next==NULL){
            return true;
        }
       
   ListNode*temp=findmid(head);

   ListNode*prev=NULL;
   ListNode*curr=temp;

   while(curr!=NULL){
       ListNode*f=curr->next;
       curr->next=prev;
       prev=curr;
       curr=f;
   }
   ListNode*temp1=head;
   while(temp1->next->next!=NULL){
       temp1=temp1->next;
   }
   temp1->next=prev;

   ListNode*l1=head;
   ListNode*l2=prev;
   while(l1!=prev){
       if(l1->val!=l2->val){
           return false;
       }
       l1=l1->next;
       l2=l2->next;
       
   }
   return true;;

}
};