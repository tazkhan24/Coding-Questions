// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int min1=-1;
        int min2 = -1;
        int mini =INT_MAX;
        for(int i =0;i<n;i++){
            if(a[i] == x )
                min1 = i;
            if(a[i] == y )
                min2 = i;
            if(min1 != -1 && min2 != -1){
                    mini = min(mini,abs(min2-min1));
                
            }
                
        }
        if(min1 == -1 or min2 == -1)
            return -1;
        else
        return mini;
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends