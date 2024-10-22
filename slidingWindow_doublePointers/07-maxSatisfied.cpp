//
// Created by Administrator on 24-10-22.
//

#include <vector>

class Solution {
public:
    static int maxSatisfied(const std::vector<int>& customers, const std::vector<int>& grumpy, const int minutes) {
        const size_t length = customers.size();
        int total = 0;
        for (int i = 0; i < length; i++) {
            if (grumpy[i] == 0) {
                total += customers[i];
            }
        }
        int increase = 0;
        for (int i = 0; i < minutes; i++) {
            increase += customers[i] * grumpy[i];
        }
        int maxIncrease = increase;
        for (int i = minutes; i < length; i++) {
            increase = increase - customers[i - minutes] * grumpy[i - minutes] + customers[i] * grumpy[i];
            maxIncrease = std::max(maxIncrease, increase);
        }
        return maxIncrease + total;
    }
};
