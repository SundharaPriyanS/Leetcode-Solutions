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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp=new ListNode(0);
        ListNode *t=temp;
        int i=0;
        while (l1 || l2 || i==1){
            int s=i;
            if (l1){
                s+=l1->val;
                l1=l1->next;
            }
            if (l2){
                s+=l2->val;
                l2=l2->next;
            }
            i=s/10;
            if (t->next)
                t->next->val=s%10;
            else
                t->next=new ListNode(s%10);
            t=t->next;
        }
        ListNode *r=temp->next;
        delete(temp);
        return r;
    }
};