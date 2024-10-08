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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp1=head;
        ListNode*temp2=head;
        int count=1;
        while(temp1&&count!=n){
            count++;
            temp1=temp1->next;
        }
        ListNode*prev=NULL;
        while(temp1->next!=NULL){
            prev=temp2;
            temp2=temp2->next;
            temp1=temp1->next;
        }
        if(temp1==head&&n==1)return NULL;
        // temp1 is always going to be at the end 
        // temp2 will be at the node which is going to get deleted
        // Since we're always trying to find the node that is behind the temp2 so if temp2 is at the head then prev is going to be null
        if(temp2==head){
            head=head->next;
            return head;
        }
        ListNode*tbd=prev->next;
        prev->next=tbd->next;
        temp2->next=NULL;
        delete(tbd);
        return head;
        
    }
};