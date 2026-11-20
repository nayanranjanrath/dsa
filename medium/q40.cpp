class Solution {
    private:
    void solve(vector<int>& nums,int target,int i , vector<vector<int>>&ans ,vector<int> temp){
         if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for(int j =i  ;j<size(nums);j++){
             if (j > i && nums[j] == nums[j - 1])
                continue;                     
            if (nums[j] > target)
                break;   

             temp.push_back(nums[j]);
            solve(nums, target - nums[j], j+ 1, ans,temp);
            temp.pop_back();   
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
         vector<vector<int>>ans;
         sort(nums.begin(),nums.end());
         vector<int> temp;
         int i =0;
          solve(nums, target,i, ans,temp);
        return ans;
    }
};