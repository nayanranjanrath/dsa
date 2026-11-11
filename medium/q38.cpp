class Solution {
private:
    void solve(string value, string &ans, int n) {
        if (n == 0) return;
        if (value == " ") {
            ans = "1";
            n--;
            solve("1", ans, n);
            return;                        
        }
        string next;                        
        for (int i = 0; i < (int)value.size(); i++) {
            int count = 1;
            while (i + count < (int)value.size() && value[i + count] == value[i])
                count++;
            next += to_string(count);
            next += value[i];
            i += count - 1;                  
        }
        ans = next;                         
        n--;
        solve(ans, ans, n);
    }
public:
    string countAndSay(int n) {
        string ans;
        solve(" ", ans, n);
        return ans;
    }
};   