//
// Created by Administrator on 24-10-20.
//

#include <vector>

class Solution {
public:
    static int diagonalSum(std::vector<std::vector<int>>& mat) {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                if (i == j || i + j == mat.size() - 1) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};
