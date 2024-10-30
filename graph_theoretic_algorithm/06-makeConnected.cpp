//
// Created by Administrator on 24-10-30.
//

#include <vector>
#include <numeric>

// class Solution {
//     std::vector<std::vector<int> > edges;
//     std::vector<int> used;
//
// public:
//     void dfs(const int u) {
//         used[u] = true;
//         for (const auto v: edges[u]) {
//             if (!used[v]) {
//                 dfs(v);
//             }
//         }
//     }
//
//     int makeConnected(const int n, std::vector<std::vector<int> > &connections) {
//         if (connections.size() < n - 1) {
//             return -1;
//         }
//         edges.resize(n);
//         for (auto &conn: connections) {
//             edges[conn[0]].push_back(conn[1]);
//             edges[conn[1]].push_back(conn[0]);
//         }
//
//         used.resize(n);
//         int ans = 0;
//         for (int i = 0; i < n; ++i) {
//             if (!used[i]) {
//                 dfs(i);
//                 ans++;
//             }
//         }
//         return ans - 1;
//     }
// };

class UnionFind {
public:
    std::vector<int> parent; // 存储每个结点的父结点
    std::vector<int> size; // 记录每个集合的大小
    int setCount; //记录当前连通分量的数量

    // 构造函数
    explicit UnionFind(const int n) : parent(n), size(n, 1), setCount(n) {
        std::iota(parent.begin(), parent.end(), 0);
    }

    int findset(const int x) {
        if (parent[x] != x) {
            parent[x] = findset(parent[x]); // 路径压缩
        }
        return parent[x];
    }

    bool unite(int x, int y) {
        x = findset(x);
        y = findset(y);
        if (x == y) {
            return false; // 已经连接
        }
        // 确保较大的树合并较小的树
        if (size[x] < size[y]) {
            std::swap(x, y); // 确保 x 是大树
        }
        parent[y] = x;
        size[x] += size[y];
        --setCount;
        return true;
    }

    bool connected(const int x, const int y) {
        return findset(x) == findset(y);
    }
};

class Solution {
public:
    static int makeConnected(const int n, std::vector<std::vector<int> > &connections) {
        if (connections.size() < n - 1) {
            return -1; // 连接不足
        }

        UnionFind uf(n);
        for (const auto &conn: connections) {
            uf.unite(conn[0], conn[1]);
        }

        return uf.setCount - 1; // 需要的操作数
    }
};
