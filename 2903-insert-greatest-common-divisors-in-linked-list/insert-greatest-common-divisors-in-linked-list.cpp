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
int gcd(int a ,int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*temp1=head;
        ListNode*temp2=head->next;
        while(temp2!=NULL){
            int value2=temp2->val;
            int value1=temp1->val;
            int v=gcd(value1,value2);
            ListNode*n=new ListNode(v,temp2);
            temp1->next=n;
            temp1=temp2;
            temp2=temp2->next;
            }
            return head;
        
    }
};