// link - https://leetcode.com/problems/generate-parentheses/submissions/1684264356/

class Solution {
public:
    vector<string> result;

    void solve(int n, string curr, int open, int close) {
        if(curr.length() == 2*n) {
            result.push_back(curr);
            return;
        }
        
        if(open < n) {
            curr.push_back('(');
            solve(n, curr, open+1, close);
            curr.pop_back();
        }
        if(close < open) {
            curr.push_back(')');
            solve(n, curr, open, close+1);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(n, curr, 0, 0);

        return result;
    }
};

