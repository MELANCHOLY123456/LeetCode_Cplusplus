//
// Created by Administrator on 24-10-28.
//

#include <numeric>
#include <vector>

class UnionFind {
    std::vector<int> parent;
    std::vector<int> sizes;

public:
    explicit UnionFind(const int n) : parent(n), sizes(n, 1) {
        iota(parent.begin(), parent.end(), 0);
    }

    int Find(const int x) {
        if (parent[x] == x) {
            return x;
        }
        return parent[x] = Find(parent[x]);
    }

    void Union(const int x, const int y) {
        const int root_x = Find(x);

        if (const int root_y = Find(y); root_x != root_y) {
            if (sizes[root_x] > sizes[root_y]) {
                parent[root_y] = root_x;
                sizes[root_x] += sizes[root_y];
            } else {
                parent[root_x] = root_y;
                sizes[root_y] += sizes[root_x];
            }
        }
    }

    [[nodiscard]] int Getsize(const int x) const {
        return sizes[x];
    }
};

class Solution {
public:
    static long long countPairs(const int n, std::vector<std::vector<int> > &edges) {
        UnionFind uf(n);
        for (const auto &edge: edges) {
            uf.Union(edge[0], edge[1]);
        }
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += n - uf.Getsize(uf.Find(i));
        }
        return res / 2;
    }
};
