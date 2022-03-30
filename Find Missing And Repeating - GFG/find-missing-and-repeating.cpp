// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *array = new int[2];
        for(int i=1; i<=n;i++)
        {
            if(arr[i-1]== arr[i]){
                array[0] = arr[i-1];
                break;
            }
        }
        
        int cnt =0;
        for(int i=1;i<=n; i++)
        {
            if(array[0]==i)
          {
              cnt++;
          }
          if(arr[i-1+cnt]!=i)
          {
             array[1]=i;
             break;
          }
      }
         return array;
        
        
        
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends