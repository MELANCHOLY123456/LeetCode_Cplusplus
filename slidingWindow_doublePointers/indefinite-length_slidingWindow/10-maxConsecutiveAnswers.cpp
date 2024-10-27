//
// Created by Administrator on 24-10-27.
//

#include <algorithm>
#include <string>

class Solution {
public:
    static int maxConsecutiveChar(const std::string &answerKey, const int k, const char ch) {
        const int length = static_cast<int>(answerKey.size());
        int ans = 0;
        for (int left = 0, right = 0, sum = 0; right < length; right++) {
            sum += answerKey[right] != ch;
            while (sum > k) {
                sum -= answerKey[left++] != ch;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }

    static int maxConsecutiveAnswers(const std::string &answerKey, const int k) {
        return std::max(maxConsecutiveChar(answerKey, k, 'T'), maxConsecutiveChar(answerKey, k, 'F'));
    }
};
