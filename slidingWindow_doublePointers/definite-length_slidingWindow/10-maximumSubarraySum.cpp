//
// Created by Administrator on 24-10-24.
//

#include <unordered_map>
#include <vector>

class Solution {
public:
    static long long maximumSubarraySum(const std::vector<int> &nums, const int k) {
        long long sum = 0;
        long long maxSum = 0;
        std::unordered_map<int, int> count;
        for (int i = 0; i < k - 1; i++) {
            sum += nums[i];
            count[nums[i]]++;
        }
        for (int i = k - 1; i < nums.size(); i++) {
            sum += nums[i];
            count[nums[i]]++;
            if (count.size() == k) {
                maxSum = std::max(maxSum, sum);
            }
            int out = nums[i + 1 - k];
            sum -= out;
            if (--count[out] == 0) {
                count.erase(out);
            }
        }
        return maxSum;
    }
};
