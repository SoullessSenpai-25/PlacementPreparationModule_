class Solution {
     private:
    int binarySearch(vector<int> nums,int l,int r,int x){
         if (r >= l) {
        int mid = l + (r - l) / 2;

        if (nums[mid] == x)
            return mid;
 
        
        if (nums[mid] > x)
            return binarySearch(nums, l, mid - 1, x);
 
        return binarySearch(nums, mid + 1, r, x);
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]>x){
            return i;
        }}
        return nums.size();
    
    
    }

public:
    int searchInsert(vector<int>& nums, int target) {
         int l=0;
        int r=nums.size();
        return binarySearch(nums, 0, r - 1, target);
        
        
    }
};

   
