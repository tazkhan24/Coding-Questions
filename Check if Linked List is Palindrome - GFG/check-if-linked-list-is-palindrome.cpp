// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  Node *findMid(Node* head){
      Node *slow = head, *fast = head->next;
      while(fast && fast->next){
          slow = slow->next;
          fast = fast->next->next;
      }
      return slow;
  }
  Node *reverse(Node *head){
      Node *prev = NULL, *curr = head;
      while(curr){
          Node* temp = curr;
          curr = curr->next;
          temp ->next = prev;
          prev = temp;
      }
      return prev;
  }
  
  
  //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(!head)
            return false;
        if(!head->next)
            return true;
        Node* mid = findMid(head);
        Node* temp = reverse(mid->next);
        mid->next = NULL;
        while(temp && head){
            if(temp->data != head->data)
                return false;
                temp = temp->next;
                head = head->next;
        }
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends