// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long Find(long long i, long long n){
        if(i>n)
            return i/2;
            else{
                i*=2;
                return Find(i,n);
            }
    }
    long long  nthPosition(long long int n){
        // code here
        return Find(1,n);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.nthPosition(n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends