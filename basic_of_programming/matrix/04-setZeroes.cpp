//
// Created by Administrator on 24-10-20.
//

#include <vector>

class Solution {
public:
    static void setZeroes(std::vector<std::vector<int>>& matrix) {
        const size_t m = matrix.size();
        const size_t n = matrix[0].size();
        std::vector<int> row(m), col(n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = col[j] = 1;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
