//
// Created by Administrator on 24-10-26.
//

#include <algorithm>
#include <string>
#include <vector>

class Solution {
public:
    static int equalSubstring(const std::string &s, const std::string &t, int maxCost) {
        const int length = static_cast<int>(s.length());
        std::vector<int> diff(length, 0);
        for (int i = 0; i < length; i++) {
            diff[i] = abs(s[i] - t[i]);
        }
        int maxLength = 0;
        int start = 0;
        int end = 0;
        int sum = 0;
        while (end < length) {
            sum += diff[end];
            while (sum > maxCost) {
                sum -= diff[start];
                start++;
            }
            maxLength = std::max(maxLength, end - start + 1);
            end++;
        }
        return maxLength;
    }
};
