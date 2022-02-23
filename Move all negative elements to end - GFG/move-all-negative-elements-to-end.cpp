// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        //using queue
        deque<int> q;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            q.push_back(arr[i]);
            else
            q.push_front(arr[i]);
        }
        int i=n-1,j=0;
        while(!q.empty())
        {
            if(q.front()<0)
            {
                arr[i]=q.front();
                i--;
            }
            else
            {
                arr[j]=q.front();
                j++;
            }
            q.pop_front();
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends