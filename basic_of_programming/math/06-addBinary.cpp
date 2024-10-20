//
// Created by Administrator on 24-10-20.
//

#include <algorithm>
#include <string>

class Solution {
public:
    static std::string addBinary(std::string a, std::string b) {
        std::string res;
        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());

        const int n = static_cast<int>(std::max(a.size(), b.size()));
        int carry = 0;
        for (size_t i = 0; i < n; ++i) {
            carry += i < a.size() ? (a.at(i) == '1') : 0;
            carry += i < b.size() ? (b.at(i) == '1') : 0;
            res.push_back((carry % 2) ? '1' : '0');
            carry /= 2;
        }

        if (carry) {
            res.push_back('1');
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
