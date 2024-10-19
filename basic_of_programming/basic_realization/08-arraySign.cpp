//
// Created by Administrator on 24-10-19.
//

#include <vector>

class Solution {
public:
    static int arraySign(const std::vector<int>& nums) {
        int ans = 1;
        for (const int num : nums) {
            if (num == 0) {
                ans = 0;
            }
            if (num < 0) {
                ans = -ans;
            }
        }
        return ans;
    }
};
