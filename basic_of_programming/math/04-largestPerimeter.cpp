//
// Created by Administrator on 24-10-20.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int largestPerimeter(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i = static_cast<int>(nums.size()) - 1; i >= 2; i--) {
            if (nums[i] < nums[i - 1] + nums[i - 2]) {
                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }
        return 0;
    }
};
