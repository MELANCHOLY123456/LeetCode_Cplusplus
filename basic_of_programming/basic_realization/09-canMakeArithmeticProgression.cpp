//
// Created by Administrator on 24-10-19.
//

#include <vector>
#include <algorithm>

class Solution
{
public:
    static bool canMakeArithmeticProgression(std::vector<int> &arr)
    {
        std::sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i] * 2 != arr[i - 1] + arr[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};