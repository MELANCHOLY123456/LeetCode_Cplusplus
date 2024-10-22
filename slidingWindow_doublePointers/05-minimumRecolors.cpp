//
// Created by Administrator on 24-10-22.
//

#include <string>

class Solution {
public:
    static bool isW(const char ch) {
        return ch == 'W';
    }

    static int minimumRecolors(const std::string& blocks, const int k) {
        const size_t length = blocks.size();
        int count_W = 0;
        for (int i = 0; i < k; i++) {
            count_W += isW(blocks[i]);
        }
        int min_count_W = count_W;
        for (int i = k; i < length; i++) {
            count_W += isW(blocks[i]) - isW(blocks[i - k]);
            min_count_W = std::min(min_count_W, count_W);
        }
        return min_count_W;
    }
};
