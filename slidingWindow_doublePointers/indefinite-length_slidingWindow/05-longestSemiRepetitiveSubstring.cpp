//
// Created by Administrator on 24-10-26.
//

#include <string>

class Solution {
public:
    static int longestSemiRepetitiveSubstring(const std::string &s) {
        int ans = 1;
        int left = 0;
        int same = 0;
        const int length = static_cast<int>(s.length());
        for (int right = 1; right < length; right++) {
            if (s[right] == s[right - 1] && ++same > 1) {
                for (left++; s[left] != s[left - 1]; left++) {
                }
                same = 1;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
