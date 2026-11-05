class Solution {
private:
    void solve(int n, vector<string>& ans, int counta, int countb, string& stri) {
        
        if (counta == n && countb == n) {
            ans.push_back(stri);
            return;
        }

        
        if (counta < n) {
            stri.push_back('(');
            solve(n, ans, counta + 1, countb, stri);
            stri.pop_back(); 
        }

        
        if (countb < counta) {
            stri.push_back(')');
            solve(n, ans, counta, countb + 1, stri);
            stri.pop_back(); 
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string stri = "";
        solve(n, ans, 0, 0, stri);
        return ans;
    }
};