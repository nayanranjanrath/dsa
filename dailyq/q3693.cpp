class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        // Step 0 is ground with cost 0
        costs.insert(costs.begin(), 0);

        // minCost[i] = lowest cost to reach step i from ground (0)
        vector<int> minCost(n + 1, INT_MAX / 2);
        
        // Starting point: ground has cost 0
        minCost[0] = 0;

        for (int i = 0; i <= n; i++) {
            // Jump 1 step to i + 1
            if (i + 1 <= n) {
                minCost[i + 1] = min(minCost[i + 1], minCost[i] + costs[i + 1] + 1);
            }
            // Jump 2 steps to i + 2
            if (i + 2 <= n) {
                minCost[i + 2] = min(minCost[i + 2], minCost[i] + costs[i + 2] + 4);
            }
            // Jump 3 steps to i + 3
            if (i + 3 <= n) {
                minCost[i + 3] = min(minCost[i + 3], minCost[i] + costs[i + 3] + 9);
            }
        }

        return minCost[n];
    }
};