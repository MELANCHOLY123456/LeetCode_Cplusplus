//
// Created by Administrator on 24-10-20.
//

class Solution {
public:
    static int pre(const int x) {
        return (x + 1) >> 1;
    }

    static int countOdds(const int low, const int high) {
        // int count = 0;
        // for (int i = low; i <= high; i++) {
        //     if (i % 2 != 0) {
        //         count++;
        //     }
        // }
        // return count;
        return pre(high) - pre(low - 1);
    }
};
