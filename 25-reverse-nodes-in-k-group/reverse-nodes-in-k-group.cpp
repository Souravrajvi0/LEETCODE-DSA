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
    int len(ListNode* head){
        int len=0;
        ListNode *temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(len(head)<k){
            return head;
        }
        ListNode*prev=NULL;
        ListNode*curr=head;
        int count=0;
        while(count<k){
            ListNode*f=curr->next;
            curr->next=prev;
            prev=curr;
            curr=f;
            count++;
        }
        if(curr!=NULL){
           head->next =reverseKGroup(curr,k);
        }
        return prev;


        
    }
};