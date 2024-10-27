//
// Created by Administrator on 24-10-27.
//

#include <vector>

class Solution {
public:
    static int longestOnes(const std::vector<int> &nums, const int k) {
        const int length = static_cast<int>(nums.size());
        int ans = 0;
        int left = 0;
        int left_sum = 0;
        int right_sum = 0;
        for (int right = 0; right < length; right++) {
            right_sum += 1 - nums[right];
            while (left_sum < right_sum - k) {
                left_sum += 1 - nums[left];
                left++;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
