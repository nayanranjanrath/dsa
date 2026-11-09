class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = size(nums)-1;
        int s = 0;
        int ans =0;
        while(s<=l){
            int mid = s+(l-s)/2;
            ans =mid;
            if(nums[mid]==target){
                return mid; 
            }
            else if(nums[mid]>target){
                l = mid-1;
            }
            else{
                s =mid+1;
            }
        }
            if(nums[ans]<target){
                return ans+1;
            }

        return ans;

    }
};