//
// Created by Administrator on 24-10-22.
//

#include <vector>

class Solution {
public:
    static double findMaxAverage(const std::vector<int>& nums, int k) {
        int sum = 0;
        const size_t length = nums.size();
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int maxSum = sum;
        for (int i = k; i < length; i++) {
            sum = sum + nums[i] - nums[i - k];
            maxSum = std::max(maxSum, sum);
        }
        return static_cast<double>(maxSum) / k;
    }
};
