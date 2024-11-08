//
// Created by Administrator on 24-11-4.
//

#include <numeric>
#include <vector>

class Solution {
public:
    static int minOperations(std::vector<int> &nums, const int x) {
        const int length = nums.size();

        if (const int sum = accumulate(nums.begin(), nums.end(), 0); sum < x) {
            return -1;
        }

        int right = 0;
        int left_sum = 0;
        int right_sum = 0;
        int ans = length + 1;

        for (int left = 0; left < length; left++) {
            if (left != -1) {
                left_sum += nums[left];
            }
            while (right < length && left_sum + right_sum > x) {
                right_sum -= nums[right];
                right++;
            }
            if (left_sum + right_sum == x) {
                ans = std::min(ans, (left + 1) + (length - right));
            }
        }

        return ans > length ? -1 : ans;
    }
};
