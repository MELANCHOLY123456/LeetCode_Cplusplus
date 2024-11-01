//
// Created by Administrator on 24-11-1.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int rob(const std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        const int size = nums.size();
        if (size == 1) {
            return nums[0];
        }
        auto dp = std::vector(size, 0);
        dp[0] = nums[0];
        dp[1] = std::max(nums[0], nums[1]);
        for (int i = 2; i < size; i++) {
            dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[size - 1];
    }
};
