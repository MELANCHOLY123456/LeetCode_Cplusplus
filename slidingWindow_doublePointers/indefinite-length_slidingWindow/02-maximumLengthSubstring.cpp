//
// Created by Administrator on 24-10-25.
//

#include <string>
#include <unordered_map>

class Solution {
public:
    static int maximumLengthSubstring(const std::string &s) {
        const int length = static_cast<int>(s.length());
        int ans = 0;
        std::unordered_map<char, int> map;
        for (int left = 0, right = 0; right < length; right++) {
            map[s[right]]++;
            while (map[s[right]] > 2) {
                if (--map[s[left]] == 0) map.erase(s[left]);
                left++;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
