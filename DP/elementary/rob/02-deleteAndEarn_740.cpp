//
// Created by Administrator on 24-11-1.
//

#include <vector>

class Solution {
    static int rob(const std::vector<int>& nums) {
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
    static int deleteAndEarn(std::vector<int>& nums) {
        int maxVal = 0;
        for (int val : nums) {
            maxVal = std::max(val, maxVal);
        }
        std::vector<int> sum(maxVal + 1);
        for (const int val : nums) {
            sum[val] += val;
        }
        return rob(sum);
    }
};
