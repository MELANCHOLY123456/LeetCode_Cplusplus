//
// Created by Administrator on 24-10-22.
//

#include <vector>

class Solution {
public:
    static int numOfSubarrays(const std::vector<int>& arr, const int k, const int threshold) {
        const size_t length = arr.size();
        int left = threshold * k;
        for (int i = 0; i < k; i++) {
            left -= arr[i];
        }
        // int cnt = (left <= 0) ? 1 : 0;
        int cnt = left <= 0;
        for (int i = k; i < length; i++) {
            left += (arr[i - k] - arr[i]);
            cnt += left <= 0;
        }
        return cnt;
    }
};
