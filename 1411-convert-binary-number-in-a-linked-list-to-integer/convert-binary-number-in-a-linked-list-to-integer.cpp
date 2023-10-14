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
    int getDecimalValue(ListNode* head) {
        
        int size=0;
        ListNode*current=head;
        while(current!=NULL){
            size++;
            current=current->next;
        }
        size--;
        int ans=0;
        current=head;
        while(current!=NULL){
        ans=ans+pow(2,size)*(current->val);
        size--;
        current=current->next;
        }

      return ans;
      
    }
};