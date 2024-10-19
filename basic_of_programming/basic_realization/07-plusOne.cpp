//
// Created by Administrator on 24-10-19.
//

#include <vector>

class Solution {
public:
    static std::vector<int> plusOne(std::vector<int>& digits) {
        const size_t len = digits.size();
        for (size_t i = len - 1; i < len; i--) {
            // 注意这里的条件是 i < len 而不是 i >= 0
            if (digits[i] != 9) {
                digits[i]++;
                for (size_t j = i + 1; j < len; j++) {
                    digits[j] = 0;
                }
                return digits;
            }
        }

        std::vector<int> ans(len + 1);
        ans[0] = 1;
        for (size_t k = 1; k < len + 1; k++) {
            ans[k] = 0; // 初始化剩下的数字为0
        }
        return ans;
    }
};
