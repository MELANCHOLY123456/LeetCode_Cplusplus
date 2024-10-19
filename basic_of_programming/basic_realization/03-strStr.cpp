//
// Created by Administrator on 24-10-19.
//

#include <string>

class Solution {
public:
    static int strStr(const std::string& haystack, const std::string& needle) {
        const size_t length01 = haystack.length();
        const size_t length02 = needle.length();
        for (int i = 0; i + length02 <= length01; i++) {
            bool match = true;
            for (int j = 0; j < length02; j++) {
                if (haystack[i + j] != needle[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return i;
            }
        }
        return -1;
    }
};
