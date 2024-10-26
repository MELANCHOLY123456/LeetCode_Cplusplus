//
// Created by Administrator on 24-10-26.
//

#include <stack>
#include <vector>

class Solution {
public:
    static std::vector<int> dailyTemperatures(const std::vector<int> &temperatures) {
        const int length = static_cast<int>(temperatures.size());
        std::vector<int> ans(length);
        std::stack<int> st;
        for (int i = 0; i < length; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                const int previousIndex = st.top();
                ans[previousIndex] = i - previousIndex;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
