//
// Created by Administrator on 24-11-1.
//

#include <vector>

class Solution {
    static int rob(const std::vector<int> &nums) {
        const int size = nums.size();
        int first = nums[0];
        int second = std::max(nums[0], nums[1]);
        for (int i = 2; i < size; i++) {
            const int temp = second;
            second = std::max(second, first + nums[i]);
            first = temp;
        }
        return second;
    }

public:
    static int deleteAndEarn_01(std::vector<int> &nums) {
        int maxVal = 0;
        for (int val: nums) {
            maxVal = std::max(val, maxVal);
        }
        std::vector<int> sum(maxVal + 1);
        for (const int val: nums) {
            sum[val] += val;
        }
        return rob(sum);
    }

    static int deleteAndEarn_02(const std::vector<int> &nums) {
        const int length = nums.size();
        int val[10001];
        for (int & i : val) {
            i = 0;
        }
        for (int i = 0; i < length; i++) {
            const int num = nums[i];
            val[num] += num;
        }
        std::vector<int> dp(10001);
        dp[0] = val[0];
        dp[1] = std::max(dp[0], val[1]);
        for (int i = 2; i < 10001; i++) {
            dp[i] = std::max(dp[i - 1], dp[i - 2] + val[i]);
        }
        return dp[10001 - 1];
    }
};
