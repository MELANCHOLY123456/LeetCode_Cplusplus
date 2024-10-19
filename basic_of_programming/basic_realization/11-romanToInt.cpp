//
// Created by Administrator on 24-10-19.
//

#include <string>
#include <unordered_map>

class Solution {
private:
    std::unordered_map<char, int> symbolValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

public:
    int romanToInt(std::string s) {
        int ans = 0;
        const size_t len = s.length();
        for (int i = 0; i < len; i++) {
            if (const int value = symbolValues[s[i]]; i < len - 1 && value < symbolValues[s[i + 1]]) {
                ans -= value;
            } else {
                ans += value;
            }
        }
        return ans;
    }
};
