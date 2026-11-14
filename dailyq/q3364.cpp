class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int e = 0;
        int len = 0;
        int count = INT_MAX;
        int sum = 0;
        int n = nums.size();

        while (e < n) {
           
            sum += nums[e];
            len++;

          
            if (l <= len && len <= r && sum > 0) {
                if (count > sum) {
                    count = sum;
                }
            }

            
            if (len == r || e == n - 1) {
                sum = 0;
                e = e - len + 1;
                len = 0;
            }

            e++;
        }

        return (count == INT_MAX) ? -1 : count;
    }
};