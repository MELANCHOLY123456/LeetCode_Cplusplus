//
// Created by Administrator on 24-10-20.
//

#include <string>
#include <vector>

class Solution {
public:
    static bool isRobotBounded(const std::string& instructions) {
        const std::vector<std::vector<int>> dir = {
            {0, 1}, {1, 0}, {0, -1}, {-1, 0}
        };
        int dir_index = 0;
        int x = 0, y = 0;
        for (const auto& instruction : instructions) {
            if (instruction == 'G') {
                x += dir[dir_index][0];
                y += dir[dir_index][1];
            } else if (instruction == 'L') {
                dir_index += 3;
                dir_index %= 4;
            } else {
                dir_index++;
                dir_index %= 4;
            }
        }
        return dir_index != 0 || (x == 0 && y == 0);
    }
};
