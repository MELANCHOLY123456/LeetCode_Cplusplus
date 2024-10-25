//
// Created by Administrator on 24-10-22.
//

#include <string>

class Solution {
public:
    static bool isVowel(const char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    static int maxVowels(const std::string& s, const int k) {
        const size_t length = s.length();
        int vowel_count = 0;
        for (int i = 0; i < k; ++i) {
            vowel_count += isVowel(s[i]);
        }
        int maxVowel = vowel_count;
        for (int i = k; i < length; ++i) {
            vowel_count += isVowel(s[i]) - isVowel(s[i - k]);
            maxVowel = std::max(maxVowel, vowel_count);
        }
        return maxVowel;
    }
};
