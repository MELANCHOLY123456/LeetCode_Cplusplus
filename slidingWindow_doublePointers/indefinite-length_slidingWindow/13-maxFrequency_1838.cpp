//
// Created by Administrator on 24-11-8.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int maxFrequency(std::vector<int> &nums, const int k) {
        sort(nums.begin(), nums.end());
        const int length = nums.size();
        long long total = 0; // 用于存储当前窗口的和
        int left = 0;
        int res = 1;
        // 从第二个元素开始遍历
        for (int right = 1; right < length; ++right) {
            total += static_cast<long long>(nums[right] - nums[right - 1]) * (right - left);
            while (total > k) {
                total -= nums[right] - nums[left];
                ++left;
            }
            res = std::max(res, right - left + 1);
        }
        return res;
    }
};
