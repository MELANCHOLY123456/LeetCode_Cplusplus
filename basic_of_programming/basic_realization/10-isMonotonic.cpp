//
// Created by Administrator on 24-10-19.
//

#include <vector>

class Solution {
public:
    static bool isMonotonic(std::vector<int>& nums) {
        bool up = true;
        bool down = true;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                up = false;
            }
            if (nums[i] < nums[i + 1]) {
                down = false;
            }
        }
        return up || down;
    }
};
