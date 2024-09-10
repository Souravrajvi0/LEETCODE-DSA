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
    ListNode* swapPairs(ListNode* head) {
       if(head==NULL||head->next==NULL)return head;
       ListNode*dummy=head->next;
       ListNode*temp2=head->next;
       ListNode*temp1=head;
       ListNode*prev=NULL;
       while(temp2){
        ListNode*nextpair=temp2->next;

        temp2->next=temp1;
        temp1->next=nextpair;
        if(prev!=NULL){
            prev->next=temp2;
        }

       if (nextpair == NULL || nextpair->next == NULL) {
            break;
        }

       prev=temp1;
       temp1=nextpair;
       temp2=nextpair->next;
     }
        return dummy;
    }
};