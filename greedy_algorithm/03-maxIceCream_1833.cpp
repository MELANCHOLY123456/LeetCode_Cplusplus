//
// Created by Administrator on 24-11-8.
//

#include <algorithm>
#include <vector>

class Solution {
public:
    static int maxIceCream(std::vector<int> &costs, int coins) {
        std::sort(costs.begin(), costs.end());
        int count = 0;
        const int n = costs.size();
        for (int i = 0; i < n; i++) {
            if (const int cost = costs[i]; coins >= cost) {
                coins -= cost;
                count++;
            } else {
                break;
            }
        }
        return count;
    }
};
