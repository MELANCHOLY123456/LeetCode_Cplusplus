//
// Created by Administrator on 24-10-25.
//

#include <vector>

class Solution {
public:
    static int longestSubarray(const std::vector<int>& nums) {
        int sum = 0;
        int i = 0;
        int j;
        for (j = 0; j < nums.size(); j++) {
            sum += nums[j];

            // sum == j - i 代表当前窗口中有一个0，移动右端
            // sum > j - i，代表全都是1，移动右端
            // sum < j - i代表窗口中包含多个（两个）0，此时移动窗口两端
            if (sum < j - i) {
                sum -= nums[i++];
            }
        }
        return j - i - 1;
    }
};
