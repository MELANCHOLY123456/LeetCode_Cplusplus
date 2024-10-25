//
// Created by Administrator on 24-10-22.
//

#include <vector>

class Solution {
public:
    std::vector<int> decrypt(std::vector<int>& code, const int k) {
        const int length = code.size();
        std::vector<int> ans(length, 0);
        if (k == 0) {
            return ans;
        }
        code.resize(2 * length);
        std::copy(code.begin(), code.begin() + length, code.begin() + length);
        int left = k > 0 ? 1 : length + k;
        int right = k > 0 ? k : length - 1;

        // 初始窗口内所以元素的和
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += code[i];
        }

        // 计算每个窗口内元素的和
        for (int i = 0; i < length; i++) {
            ans[i] = sum;
            sum -= code[left];
            sum += code[right + 1];
            left++;
            right++;
        }
        return ans;
    }
};
