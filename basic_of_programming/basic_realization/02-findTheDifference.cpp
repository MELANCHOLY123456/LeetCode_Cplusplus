//
// Created by Administrator on 24-10-19.
//

#include <string>

class Solution {
public:
    static char findTheDifference(const std::string& s, const std::string& t) {
        int as = 0;
        int at = 0;
        for (const auto ch : s) {
            as += ch;
        }
        for (const auto ch : t) {
            at += ch;
        }
        return static_cast<char>(at - as);
    }
};
