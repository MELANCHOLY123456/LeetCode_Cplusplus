//
// Created by Administrator on 24-10-19.
//
#include <algorithm>
#include <string>

class Solution {
public:
    static bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
};
