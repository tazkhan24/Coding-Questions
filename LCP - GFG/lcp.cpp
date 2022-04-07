// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        string lcp="";
        sort(ar,ar+n);
        
        int length=ar[0].size();
        
        for(int i=0;i<length;i++)
        {
            if(ar[0][i]==ar[n-1][i]){
                lcp+=ar[0][i];
            }
            else
            {
                break;
            }
        }
        if(lcp.length()==0)
        {
            return "-1";
        }
        return lcp;
        
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends