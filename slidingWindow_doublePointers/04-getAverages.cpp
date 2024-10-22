//
// Created by Administrator on 24-10-22.
//

#include <vector>

class Solution {
public:
    static std::vector<int> getAverages(const std::vector<int>& nums, const int k) {
        const size_t length = nums.size();
        long long sum = 0;
        std::vector<int> ans(length, -1);
        for (int i = 0; i < 2 * k && i < length; i++) {
            sum += nums[i];
        }
        for (int i = k; i + k < length; i++) {
            sum += nums[i + k];
            if (i - k < 0 || i + k > length) {
                continue;
            }
            ans[i] = sum / (2 * k + 1);
            sum -= nums[i - k];
        }
        return ans;
    }
};
