//
// Created by Administrator on 24-10-19.
//

#include <string>

class Solution {
public:
    static std::string toLowerCase(std::string& s) {
        // for (auto& ch : s) {
        //     ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
        // }
        // return s;

        for (char& ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch |= 32;
            }
        }
        return s;
    }
};
