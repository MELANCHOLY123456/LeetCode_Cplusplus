//
// Created by Administrator on 24-10-26.
//

#include <stack>
#include <vector>

class Solution {
public:
    static std::vector<int> finalPrices(const std::vector<int> &prices) {
        const int length = static_cast<int>(prices.size());
        std::vector<int> result(length);
        std::stack<int> st;
        for (int i = length - 1; i >= 0; i--) {
            while (!st.empty() && prices[i] < st.top()) {
                st.pop();
            }
            result[i] = st.empty() ? prices[i] : prices[i] - st.top();
            st.emplace(prices[i]);
        }
        return result;
    }
};
