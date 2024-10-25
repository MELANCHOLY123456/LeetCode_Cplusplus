//
// Created by Administrator on 24-10-23.
//

#include <string>
#include <unordered_set>

class Solution {
public:
    static bool hasAllCodes(const std::string& s, const int k) {
        if (const size_t length = s.length(); length < (1 << k) + k - 1) {
            return false;
        }

        // 使用std::stoi函数将字符串s的前k位字符转换为一个整数num
        // s.substr(0, k)获取字符串s的前k个字符，2表示这些字符是二进制数
        int num = std::stoi(s.substr(0, k), nullptr, 2);
        std::pmr::unordered_set<int> exists = {num};

        for (int i = 1; i + k <= s.size(); i++) {
            num = (num - ((s[i - 1] - '0') << (k - 1))) * 2 + (s[i + k - 1] - '0');
            exists.insert(num);
        }
        return exists.size() == (1 << k);
    }
};
