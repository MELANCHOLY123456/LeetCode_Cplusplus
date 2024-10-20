//
// Created by Administrator on 24-10-20.
//

#include <climits>
#include <numeric>
#include <vector>

class Solution {
public:
    static double average(std::vector<int>& salary) {
        int min = INT_MAX;
        int max = INT_MIN;
        int sum = 0;
        for (const auto x : salary) {
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
            sum = std::accumulate(salary.begin(), salary.end(), 0);
        }
        return (sum - min - max) / static_cast<double>(salary.size() - 2);

        // double maxValue = *max_element(salary.begin(), salary.end());
        // double minValue = *min_element(salary.begin(), salary.end());
        // double sum = accumulate(salary.begin(), salary.end(), - maxValue - minValue);
        // return sum / int(salary.size() - 2);
    }
};
