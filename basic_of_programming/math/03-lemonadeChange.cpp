//
// Created by Administrator on 24-10-20.
//

#include  <vector>

class Solution {
public:
    static bool lemonadeChange(const std::vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (const auto& bill : bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
                if (five == 0) {
                    return false;
                }
                ten++;
                five--;
            } else {
                if (five > 0 && ten > 0) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
