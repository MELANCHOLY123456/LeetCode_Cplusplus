//
// Created by Administrator on 24-11-2.
//

#include <algorithm>
#include <queue>
#include <unordered_set>
#include <vector>

class Solution {
public:
    static std::vector<std::vector<int> > getAncestors(const int n, std::vector<std::vector<int> > &edges) {
        std::vector<std::unordered_set<int> > anc(n); // 存储每个结点祖先的辅助数组
        std::vector<std::vector<int> > e(n); //邻接表
        std::vector<int> in_degree(n); //入度表

        for (auto edge: edges) {
            e[edge[0]].push_back(edge[1]);
            in_degree[edge[1]]++;
        }

        // 广度优先搜索求解拓扑排序
        std::queue<int> q; // 该队列用于存储入度为0的结点
        for (int i = 0; i < n; i++) {
            if (!in_degree[i]) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            // 遍历结点u的所有邻接结点
            for (auto v: e[u]) {
                anc[v].insert(u);
                for (int i: anc[u]) {
                    anc[v].insert(i);
                }
                in_degree[v]--;
                if (!in_degree[v]) {
                    q.push(v);
                }
            }
        }

        // 转换为答案数组
        std::vector<std::vector<int> > res(n);
        for (int i = 0; i < n; i++) {
            for (int j: anc[i]) {
                res[i].push_back(j);
            }
            sort(res[i].begin(), res[i].end());
        }
        return res;
    }
};
