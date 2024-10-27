//
// Created by Administrator on 24-10-27.
//

#include <unordered_map>
#include <vector>

class Solution {
public:
    static int maximumUniqueSubarray(const std::vector<int> &nums) {
        const int length = static_cast<int>(nums.size());
        std::unordered_map<int, int> cnt;
        int left = 0;
        int ans = 0;
        int sum = 0;
        for (int right = 0; right < length; ++right) {
            cnt[nums[right]]++;
            sum += nums[right];
            while (cnt[nums[right]] > 1) {
                cnt[nums[left]]--;
                sum -= nums[left++];
            }
            ans = std::max(ans, sum);
        }
        return ans;
    }
};
