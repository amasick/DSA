class Solution {
public: vector<int>dp;
    bool helper(int i) {
    if(i == 0) return false;
    if(dp[i]!=-1)return dp[i];

    for(int k = 1; k*k <= i; k++) {
        if(!helper(i - k*k))
            return dp[i]=1;
    }

    return dp[i]=0;
}
    bool winnerSquareGame(int n) {
        dp.resize(n+1,-1);
        
        return helper(n);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna