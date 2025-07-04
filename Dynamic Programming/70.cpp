// link - https://leetcode.com/problems/climbing-stairs/submissions/1686446421/

class Solution {
public:
    int dp[46];

    int solve(int n){
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n]!=-1)return dp[n];
        int oneStep=solve(n-1);
        int twoStep = solve(n-2);
        return dp[n]=oneStep+twoStep;
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};
