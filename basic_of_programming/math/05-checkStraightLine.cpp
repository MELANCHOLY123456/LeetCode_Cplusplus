//
// Created by Administrator on 24-10-20.
//

#include <vector>

class Solution {
public:
    static bool checkStraightLine(std::vector<std::vector<int>>& coordinates) {
        const int deltaX = coordinates[0][0];
        const int deltaY = coordinates[0][1];
        const int length = static_cast<int>(coordinates.size());
        for (int i = 0; i < length; i++) {
            coordinates[i][0] -= deltaX;
            coordinates[i][1] -= deltaY;
        }
        const int A = coordinates[1][1];
        const int B = -coordinates[1][0];
        for (int i = 2; i < length; i++) {
            const int x = coordinates[i][0];
            if (const int y = coordinates[i][1]; A * x + B * y != 0) {
                return false;
            }
        }
        return true;
    }
};
