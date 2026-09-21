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
        int cnt=0,ans=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        temp=head;
        for(int i=cnt-1;i>=0;i--)
        {
            ans+=pow(2,i)*temp->val;
            temp=temp->next;
            
        }
        return ans;
    }
};