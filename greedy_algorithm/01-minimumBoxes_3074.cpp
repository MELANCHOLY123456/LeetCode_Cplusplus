//
// Created by Administrator on 24-11-8.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int minimumBoxes(std::vector<int> &apple, std::vector<int> &capacity) {
        int sum = 0;
        for (const auto a: apple) {
            sum += a;
        }
        // std::greater<int>()是一个比较函数，它确保数组按照从大到小的顺序排序。
        std::sort(capacity.begin(), capacity.end(), std::greater());
        for (int i = 0; i < capacity.size(); i++) {
            sum -= capacity[i];
            if (sum <= 0) {
                return i + 1;
            }
        }
        return -1;
    }
};
