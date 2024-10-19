//
// Created by Administrator on 24-10-19.
//

#include <string>

class Solution {
public:
    static int lengthOfLastWord(const std::string& s) {
        size_t index = s.size(); // 使用 size_t 而不是 int

        // 跳过末尾的空格
        while (index > 0 && s[index - 1] == ' ') {
            index--;
        }

        int word_length = 0;
        // 计算最后一个单词的长度
        while (index > 0 && s[index - 1] != ' ') {
            word_length++;
            index--;
        }
        return word_length;
    }
};