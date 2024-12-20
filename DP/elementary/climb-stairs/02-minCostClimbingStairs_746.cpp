//
// Created by Administrator on 24-11-1.
//

#include <vector>

class Solution {
public:
    static int minCostClimbingStairs(const std::vector<int>& cost) {
        const int n = cost.size();
        std::vector<int> dp(n + 1);
        dp[0] = dp[1] = 0;
        for (int i = 2; i <= n; i++) {
            dp[i] = std::min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[n];
    }
};
