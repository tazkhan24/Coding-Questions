class Solution {
public:
    int binarysearch(vector<int> arr, int l, int r , int key){
        if(l>r)
            return -1;
        
        int mid = l+r-l/2;
        
        if(arr[mid] == key)
            return mid;
        
        if(arr[l]<= arr[mid]){
            if(key>=arr[l] && key <= arr[mid])
                return binarysearch(arr, l, mid-1, key);
            
            return binarysearch(arr, mid+1, r, key);
        }
        
            if(key>= arr[mid] && key <=arr[r])
                return binarysearch(arr, mid+1, r, key);
            
            return binarysearch(arr, l, mid-1,key);
        
    }
    
    int search(vector<int>& nums, int target) {
        int res;
        int l=0;
        int r = nums.size()-1;
        res = binarysearch(nums,l,r,target);
        return res;
    }
};