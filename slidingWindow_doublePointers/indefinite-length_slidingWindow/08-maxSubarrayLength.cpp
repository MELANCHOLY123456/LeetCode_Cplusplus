//
// Created by Administrator on 24-10-27.
//

#include <algorithm>
#include <unordered_map>
#include <vector>

class Solution {
public:
    static int maxSubarrayLength(const std::vector<int> &nums, const int k) {
        const int length = static_cast<int>(nums.size());
        std::unordered_map<int, int> count;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < length; right++) {
            count[nums[right]]++;
            while (count[nums[right]] > k) {
                count[nums[left++]]--;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
