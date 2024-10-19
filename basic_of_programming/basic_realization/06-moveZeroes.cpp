//
// Created by Administrator on 24-10-19.
//

#include <vector>

class Solution {
public:
    static void moveZeroes(std::vector<int>& nums) {
        const size_t n = nums.size();
        int left = 0;
        int right = 0;
        while (right < n) {
            if (nums[right]) {
                std::swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};
