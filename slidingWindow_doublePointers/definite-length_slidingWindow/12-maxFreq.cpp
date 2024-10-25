//
// Created by Administrator on 24-10-25.
//

/*
 * 这个函数的目的是在给定的字符串s中找到出现频率最高的子串
 * 这个子串的长度在minSize和maxSize之间,并且最多包含 maxLetters 个不同的字符
 */

#include <string>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    static int maxFreq(const std::string &s, const int maxLetters, const int minSize, const int maxSize) {
        const int length = static_cast<int>(s.size());
        std::unordered_map<std::string, int> occ; // 存储每个子串和其出现次数
        int ans = 0;
        for (int i = 0; i < length; i++) {
            std::unordered_set<char> exist; // 存储当前子串中已经出现过的字符
            std::string cur; // 定义一个空字符串用于构建当前的子串
            for (int j = i; j < std::min(length, i + maxSize); j++) {
                exist.insert(s[j]);
                if (exist.size() > maxLetters) {
                    break;
                }
                cur += s[j];
                // 若字串的长度大于等于minSize
                if ((j - i + 1) >= minSize) {
                    occ[cur]++;
                    ans = std::max(ans, occ[cur]);
                }
            }
        }
        return ans;
    }
};
