//
// Created by Administrator on 24-10-27.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int maximumBeauty(std::vector<int> &nums, const int k) {
        int ans = 0;
        const int length = static_cast<int>(nums.size());
        sort(nums.begin(), nums.end());
        for (int right = 0, left = 0; right < length; right++) {
            while (nums[right] - 2 * k > nums[left]) {
                left++;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
