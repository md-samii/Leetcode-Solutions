class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned long long> dp(amount + 1, 0);
        dp[0] = 1;
       for(int x : coins){
            for(int i = 1; i <= amount; i++){
                if(i >= x){
                    dp[i] += dp[i - x];
                }
            }
        }
        return static_cast<int>(dp[amount]);
    }
};