// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            
            if(mid == 0){
                return min(arr[mid],arr[mid+1]);
            }
            else
            if(mid == n-1)
            {
                return arr[mid];
            }
        
            
            else
            if(arr[mid-1]>arr[mid] && arr[mid]<arr[mid+1]){
                return arr[mid];
            }
            else
            if(arr[mid]>arr[r])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return -1;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends