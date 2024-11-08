//
// Created by Administrator on 24-11-8.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int maximumBags(std::vector<int> &capacity, const std::vector<int> &rocks, int additionalRocks) {
        const int n = rocks.size();
        // 得到每个背包的空缺数量并存放在capacity数组中
        int index;
        for (index = 0; index < n; index++) {
            capacity[index] -= rocks[index];
        }
        std::sort(capacity.begin(), capacity.end());
        for (index = 0; index < n; index++) {
            additionalRocks -= capacity[index];
            if (additionalRocks < 0) {
                break;
            }
        }
        return index;
    }
};
