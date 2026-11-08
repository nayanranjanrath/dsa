class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i =0;
        int j = size(nums)-1;
        while(i<=j){

            if(target>=nums[i]){
            if(nums[i]==target){
                return i;
            }
            i++;
            }
            else if(target<=nums[j]){
                if(nums[j]==target){
                    return j;
                }
               j--;
            }
            else{
                return -1;
            }
        }
        return -1;
    }
};