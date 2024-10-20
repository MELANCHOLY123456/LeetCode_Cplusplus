//
// Created by Administrator on 24-10-20.
//

#include <climits>
#include <numeric>
#include <vector>

class Solution {
public:
    static int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        for (auto& account : accounts) {
            maxWealth = std::max(maxWealth, std::accumulate(account.begin(), account.end(), 0));
        }
        return maxWealth;
    }
};
