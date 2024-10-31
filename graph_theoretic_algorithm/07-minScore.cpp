//
// Created by Administrator on 24-10-31.
//

#include <cstdint>
#include <unordered_map>
#include <vector>

class Solution {
    std::unordered_map<int, std::vector<std::pair<int, int> > > graph;
    int res = INT32_MAX;
    std::vector<bool> flag;

public:
    void dfs(const int x) {
        flag[x] = true;
        for (auto &[fst, snd]: graph[x]) {
            res = std::min(res, snd);
            if (!flag[fst]) {
                dfs(fst);
            }
        }
    }

    int minScore(const int n, std::vector<std::vector<int> > &roads) {
        // 构建无向图的邻接表表示
        for (auto &it: roads) {
            graph[it[0]].emplace_back(it[1], it[2]);
            graph[it[1]].emplace_back(it[0], it[2]);
        }
        flag = std::vector(n + 1, false);
        dfs(1);
        return res;
    }
};
