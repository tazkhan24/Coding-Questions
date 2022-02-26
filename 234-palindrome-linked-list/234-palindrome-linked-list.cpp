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
    ListNode* reverseList(ListNode *head)
    {
        if(head == NULL || head->next==NULL)
            return head;
        ListNode *ptr = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return ptr;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next !=NULL)
        {
            slow=slow->next;
            fast = fast->next->next;
        }
        slow = reverseList(slow);
        while(slow!=NULL)
        {
            if(slow->val!=head->val)
            return false;
            slow=slow->next;
            head = head->next;
        }
        return true;
    }
};