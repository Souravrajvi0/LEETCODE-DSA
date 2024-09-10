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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return false;
        if(head->next==NULL)return true;
        ListNode*mid=head;
        ListNode*fast=head;
        while(fast&&fast->next){
            mid=mid->next;
            fast=fast->next->next;
        }
        // reversing the linked list
        ListNode*prev=NULL;
         ListNode*temp;
        if(fast==NULL){
        temp=mid;
        }else{
        temp=mid->next;
        }
        while(temp){
            ListNode*nextNode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextNode;
        }
        temp=head;
        while(prev){
            if(prev->val!=temp->val){
                return false;
            }
            prev=prev->next;
            temp=temp->next;
        }
        return true;
        
    }
};