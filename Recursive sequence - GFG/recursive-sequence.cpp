// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long int sum =0;
    void foo(int n, int cnt, int curr){
        if(cnt == n+1)
            return;
        long long int prod = 1;
        int c = cnt;
        while(c--){
            prod*=curr;
            curr++;
        }
        sum+=prod;
        foo(n,cnt+1,curr);
    }
    long long sequence(int N){
        // code here
        foo(N,0,1);
        return sum-1;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends