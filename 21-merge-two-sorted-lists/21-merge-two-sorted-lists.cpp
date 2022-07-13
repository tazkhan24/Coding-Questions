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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* Answer = new ListNode(-1);
        ListNode* head = Answer;
        if(l1==NULL)
            return l2;
        else
        if(l2 == NULL)
            return l1;
        
        while(l1 != NULL && l2!= NULL)
        {
            if(l1->val<= l2->val)
            {
                head->next = l1;
                l1 = l1->next;
            }
            else
            {
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        if(l1!=NULL)
        {
            head->next = l1;
            head = head->next;
        }
        if(l2 != NULL)
        {
            head->next = l2;
            head = head->next;
        }
        return Answer->next;
    }
};