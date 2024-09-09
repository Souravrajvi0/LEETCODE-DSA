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
    ListNode*help(ListNode*Node){
    if(Node==NULL||Node->next==NULL)return Node;
    ListNode*newhead=help(Node->next);
    Node->next->next=Node;
    Node->next=NULL;
    return newhead;
   }
  ListNode* reverseList(ListNode* head) {
    return help(head);
    }
};