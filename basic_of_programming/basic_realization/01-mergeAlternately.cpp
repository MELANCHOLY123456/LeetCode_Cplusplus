//
// Created by Administrator on 24-10-19.
//

#include <iostream>
#include <string>

class Solution {
public:
    // 将两个字符串交替合并
    static std::string mergeAlternately(const std::string& word1, const std::string& word2) {
        const size_t len1 = word1.length();
        const size_t len2 = word2.length();
        int i = 0, j = 0;
        std::string res;
        res.reserve(len1 + len2); // 预分配足够的空间以提高效率

        // 交替添加字符直到两个字符串中的一个结束
        while (i < len1 || j < len2) {
            if (i < len1) {
                res.push_back(word1[i]);
                i++;
            }
            if (j < len2) {
                res.push_back(word2[j]);
                j++;
            }
        }
        return res;
    }

    // 测试 mergeAlternately 函数
    static void testMergeAlternately() {
        std::cout << "Test 1: " << mergeAlternately("abc", "pqr") << std::endl; // 应该输出 "apbqcr"
        std::cout << "Test 2: " << mergeAlternately("ab", "pqrs") << std::endl; // 应该输出 "apbqrs"
        std::cout << "Test 3: " << mergeAlternately("abcdef", "pq") << std::endl; // 应该输出 "apbqcdef"
        std::cout << "Test 4: " << mergeAlternately("", "pqr") << std::endl; // 应该输出 "pqr"
        std::cout << "Test 5: " << mergeAlternately("abc", "") << std::endl; // 应该输出 "abc"
    }
};

int main() {
    Solution::testMergeAlternately(); // 直接调用静态方法
    return 0;
}
