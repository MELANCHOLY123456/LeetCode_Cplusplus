//
// Created by Administrator on 24-10-25.
//

#include <ios>
#include <string>
#include <unordered_set>
#include <bits/ios_base.h>

class Solution {
public:
    static int lengthOfLongestSubstring(const std::string &s) {
        std::unordered_set<char> occ;
        const int length = static_cast<int>(s.length());
        int right_pointer = -1;
        int ans = 0;
        for (int left_pointer = 0; left_pointer < length; left_pointer++) {
            if (left_pointer != 0) {
                occ.erase(s[left_pointer - 1]);
            }
            while (right_pointer + 1 < length && !occ.count(s[right_pointer + 1])) {
                occ.insert(s[right_pointer + 1]);
                right_pointer++;
            }
            ans = std::max(ans, right_pointer - left_pointer + 1);
        }
        return ans;
    }
};
