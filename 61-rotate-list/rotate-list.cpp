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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*temp1=head;
        int length=1;
        while(temp1->next!=NULL){
           temp1=temp1->next;
           length++;
        }
        temp1->next=head;
        k=k%length;
        ListNode* temp2 = head;
       for (int i = 0; i < length - k - 1; i++) {
        temp2 = temp2->next;
        }
        ListNode* nh = temp2->next;
        temp2->next=NULL;
        return nh;

        
    }
};