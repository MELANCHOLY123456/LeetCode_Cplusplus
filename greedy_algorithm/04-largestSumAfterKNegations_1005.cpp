//
// Created by Administrator on 24-11-8.
//

#include <algorithm>
#include <numeric>
#include <vector>

class Solution {
public:
    static int largestSumAfterKNegations(std::vector<int> &nums, int k) {
        int res = 0;
        std::sort(nums.begin(), nums.end(), [](const int a, const int b) {
            return abs(a) > abs(b);
        });
        for (int &num: nums) {
            if (num < 0 && k > 0) {
                num = -num;
                k--;
            }
            res += num;
        }
        if (k % 2) {
            res -= (2 * nums[nums.size() - 1]);
        }
        return res;
    }
};
