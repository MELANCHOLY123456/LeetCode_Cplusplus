//
// Created by Administrator on 24-10-20.
//

#include <string>

class Solution {
public:
    static bool judgeCircle(const std::string& moves) {
        int x = 0, y = 0;
        for (const auto& move : moves) {
            if (move == 'U') {
                y++;
            } else if (move == 'D') {
                y--;
            } else if (move == 'L') {
                x--;
            } else if (move == 'R') {
                x++;
            }
        }
        return x == 0 && y == 0;
    }
};
