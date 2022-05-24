// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> ans;
    
    void power(int n){
        if(n == 1)
            return;
        if(n % 2 == 0){
            ans.push_back(n);
            power(pow(n,0.5));
        }
        else{
            ans.push_back(n);
             power((pow(n,1.5)));
        }
    }
    vector<int> jugglerSequence(int n){
        // code here
        power(n);
        ans.push_back(1);
        
        
        return ans;
        
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
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends