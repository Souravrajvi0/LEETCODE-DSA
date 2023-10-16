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
    int len(ListNode*head){
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode*temp1=headA;
     while(temp1->next!=NULL){
         temp1=temp1->next;
     }
     ListNode*temp2=headB;
     while(temp2->next!=NULL){
         temp2=temp2->next;
     }
     if(temp1!=temp2){
         return NULL;
     }

     int l1=len(headA);
     int l2=len(headB);
     int r;
     if(l1>l2){
         r=l1-l2;
         int k=0;
         while(k<r){
             headA=headA->next;
             k++;
         }
     }else{
         r=l2-l1;
         int k=0;
         while(k<r){
             headB=headB->next;
             k++;
         }
     }
     while(headA!=headB){
         headA=headA->next;
         headB=headB->next;
     }
     return headA;


        
    }
};