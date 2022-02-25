// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int curr_n=0;
        int N =0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            N=max(N,i+arr[i]);
            if(curr_n==i)
            {
                ans++;
                curr_n=N;
            }
            if(arr[i]==0 && i==curr_n)
            return -1;
        }
        if(N<n-1)
        return -1;
        else
        return ans;
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends