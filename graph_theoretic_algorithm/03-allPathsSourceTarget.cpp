//
// Created by Administrator on 24-10-27.
//

#include <vector>

class Solution {
public:
    std::vector<std::vector<int> > ans;
    std::vector<int> stk;

    void dfs(std::vector<std::vector<int> > &graph, const int x, const int n) {
        if (x == n) {
            ans.push_back(stk);
            return;
        }
        for (auto &y: graph[x]) {
            stk.push_back(y);
            dfs(graph, y, n);
            stk.pop_back();
        }
    }

    std::vector<std::vector<int> > allPathsSourceTarget(std::vector<std::vector<int> > &graph) {
        const int size = static_cast<int>(graph.size());
        stk.push_back(0);
        dfs(graph, 0, size - 1);
        return ans;
    }
};
