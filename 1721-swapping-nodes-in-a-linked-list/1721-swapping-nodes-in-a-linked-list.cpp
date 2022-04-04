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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* start = NULL;
        if(head==NULL){
            return NULL;
        }
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        start = temp;
        temp = head;
        int n=0;
        while(temp != NULL){
            n++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(i<n-k){

            temp=temp->next;
            i++;
        }
        
        swap(temp->val,start->val);
        
        
        
        
        return head;
        
    }
};