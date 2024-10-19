//
// Created by Administrator on 24-10-19.
//

#include <string>

class Solution {
public:
    static bool repeatedSubstringPattern(std::string s) {
        const size_t len = s.length();
        for (int i = 1; i * 2 <= len; i++) {
            if (len % i == 0) {
                bool found = true;
                for (int j = i; j < len; j++) {
                    if (s[j] != s[j - i]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    return true;
                }
            }
        }
        return false;
    }
};
