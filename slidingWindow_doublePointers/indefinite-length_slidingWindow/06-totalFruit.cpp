//
// Created by Administrator on 24-10-27.
//

#include <unordered_map>
#include <vector>

class Solution {
public:
    static int totalFruit(const std::vector<int> &fruits) {
        const int length = static_cast<int>(fruits.size());
        std::unordered_map<int, int> cnt;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < length; right++) {
            cnt[fruits[right]]++;
            while (cnt.size() > 2) {
                const auto it = cnt.find(fruits[left]);
                --it->second;
                if (it->second == 0) {
                    cnt.erase(it);
                }
                left++;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
