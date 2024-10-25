//
// Created by Administrator on 24-10-24.
//

/*
 * 在一个整数数组nums中，每次可以选择m个不同的整数
 * 然后重复选择k次,求这k次选择后能够获得的最大总和
 */

#include <unordered_map>
#include <vector>

class Solution {
public:
    static long long maxSum(const std::vector<int> &nums, const int m, const int k) {
        long long sum = 0; // 存储当前窗口中元素的和
        long long ans = 0; // 存储当前找到的总和的最大值

        // 该哈希表存储当前窗口中每个不同整数的出现次数,以便快速检查当前窗口是否已经包含了超过m个不同的整数
        std::unordered_map<long long, int> cnt;

        for (int i = 0; i < k - 1; i++) {
            sum += nums[i];
            cnt[nums[i]]++;
        }

        for (int i = k - 1; i < nums.size(); i++) {
            sum += nums[i];
            cnt[nums[i]]++;
            if (cnt.size() >= m) {
                ans = std::max(ans, sum);
            }
            const int out = nums[i - k + 1];
            sum -= out;
            if (--cnt[out] == 0) {
                cnt.erase(out);
            }
        }
        return ans;
    }
};
