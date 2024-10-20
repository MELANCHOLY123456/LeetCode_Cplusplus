//
// Created by Administrator on 24-10-20.
//

#include <vector>
#include <string>
#include <unordered_set>

class Solution {
public:
    static bool checkwin(const std::unordered_set<int>& S, std::vector<std::vector<int>>& wins) {
        for (const auto& win : wins) {
            bool flag = true;
            for (auto pos : win) {
                if (!S.count(pos)) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return true;
            }
        }
        return false;
    }

    static std::string tictactoe(const std::vector<std::vector<int>>& moves) {
        std::vector<std::vector<int>> wins = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
            {0, 3, 6},
            {1, 4, 7},
            {2, 5, 8},
            {0, 4, 8},
            {2, 4, 6}
        };

        std::unordered_set<int> A, B;
        for (int i = 0; i < moves.size(); ++i) {
            int pos = moves[i][0] * 3 + moves[i][1];
            if (i % 2 == 0) {
                A.insert(pos);
                if (checkwin(A, wins)) {
                    return "A";
                }
            } else {
                B.insert(pos);
                if (checkwin(B, wins)) {
                    return "B";
                }
            }
        }
        return (moves.size() == 9) ? "Draw" : "Pending";
    }
};
