
// __------ fails only one teat case with TLE ________

// class Solution {
// public:
//     vector<int> findSubtreeSizes(vector<int>& parent, string s) {
//         int n = parent.size();
       
//         vector<int> newParent = parent; 
        
//         for (int i = 1; i < n; i++) {
//             char val = s[i];
//             int cur = parent[i];
//             while (cur != -1 && s[cur] != val) {
//                 cur = parent[cur];
//             }
//             if (cur != -1) {
//                 newParent[i] = cur;
//             }
//         }
        
     
//         vector<vector<int>> tree(n);
//         for (int i = 1; i < n; i++) {
//             tree[newParent[i]].push_back(i);
//         }
        
       
//         vector<int> ans(n, 1);
//         function<int(int)> dfs = [&](int u) -> int {
//             int sz = 1;
//             for (int v : tree[u]) {
//                 sz += dfs(v);
//             }
//             return ans[u] = sz;
//         };
//         dfs(0);
//         return ans;
//     }
// };   




class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = s.size();
        vector<vector<int>> g(n);
        vector<int> d[26];
        for (int i = 1; i < n; i++)
            g[parent[i]].push_back(i);
        
        vector<int> ans(n);
        function<void(int,int)> dfs = [&](int i, int fa) {
            ans[i] = 1;
            int idx = s[i] - 'a';
            d[idx].push_back(i);
            for (int j : g[i])
                dfs(j, i);
            // The node that gets this subtree's size is the
            // previous same-char node on the path, or fa if none
            int k = d[idx].size() > 1 ? d[idx][d[idx].size()-2] : fa;
            if (k >= 0) ans[k] += ans[i];
            d[idx].pop_back();
        };
        dfs(0, -1);
        return ans;
    }
};   