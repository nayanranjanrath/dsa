class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        int ans = 1;

        
        if (freq.count(1)) {
            ans = max(ans, freq[1] % 2 ? freq[1] : freq[1] - 1);
        }

        for (auto& [x, count] : freq) {
            if (x == 1) continue;

            long long curr = x;
            int len = 0;

            
            while (freq.count(curr) && freq[curr] >= 2) {
                len += 2;
                if (curr > 1e4) { 
                    curr = curr * curr;
                    break;
                }
                curr = curr * curr;
            }

            if (freq.count(curr) && freq[curr] >= 1) {
                len += 1;
            } else {
             
                len -= 1;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};