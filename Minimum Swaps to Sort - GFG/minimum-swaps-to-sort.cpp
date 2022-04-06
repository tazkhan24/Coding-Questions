// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    void swap(vector<int> &arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    
	    int ans=0;
	    int n = nums.size();
	    vector<int> temp = nums;
	    map<int , int> h;
	    for(int i=0;i<n;i++){
	        h[nums[i]]=i;
	    }
	    sort(temp.begin(), temp.end());
	    
	    for(int i=0;i<n;i++){
	        if(temp[i]!=nums[i]){
	            ans++;
	            int init = nums[i];
	            
	            swap(nums,i,h[temp[i]]);
	            
	            h[init]=h[temp[i]];
	            h[temp[i]]=i;
	            
	        }
	    }
	    return ans;
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends