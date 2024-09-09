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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        stack<ListNode*>st;
        ListNode*temp=head;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }
        ListNode*nh=st.top();
        temp=nh;
        st.pop();
        while(!st.empty()){
            temp->next=st.top();
            temp=st.top();
            st.pop();
        }
        temp->next=NULL;
        return nh;

        
    }
};