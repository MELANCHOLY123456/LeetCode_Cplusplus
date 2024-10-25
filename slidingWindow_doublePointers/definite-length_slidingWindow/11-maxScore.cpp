//
// Created by Administrator on 24-10-24.
//

#include <numeric>
#include <vector>

class Solution {
public:
    static int maxScore(std::vector<int> &cardPoints, int k) {
        const int length = cardPoints.size();
        const int window_size = length - k;
        int sum = 0;
        for (int i = 0; i < window_size; i++) {
            sum += cardPoints[i];
        }
        int min_sum = sum;
        for (int i = window_size; i < length; i++) {
            sum += cardPoints[i] - cardPoints[i - window_size];
            min_sum = std::min(min_sum, sum);
        }
        return accumulate(cardPoints.begin(), cardPoints.end(), 0) - min_sum;
    }
};
