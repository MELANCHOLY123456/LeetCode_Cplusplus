#include <numeric>
#include <vector>

class Solution {
public:
    std::vector<int> father; // 并查集的父结点数组

    int find(const int x) {
        if (father[x] == x) {
            return x;
        }
        father[x] = find(father[x]);
        return father[x];
    }

    void merge(const int x, const int y) {
        const int x1 = find(x);
        const int y1 = find(y);
        father[x1] = father[y1];
    }

    int countCompleteComponents(const int n, const std::vector<std::vector<int> > &e) {
        const int m = e.size();
        father.resize(n);
        std::iota(father.begin(), father.end(), 0);
        std::vector<int> deg(n); // 存储每个顶点的度数
        std::vector<int> root(n); // 存储每个集合代表的根结点出现的次数
        std::vector<int> ok(n); // 标记每个集合是否可能完全连通

        // 构建度数并合并集合
        for (int i = 0; i < m; i++) {
            const int u = e[i][0];
            const int v = e[i][1];
            deg[u]++;
            deg[v]++;
            merge(u, v);
        }

        int ans = 0;

        // 计算每个集合的大小并标记完全连通分量
        for (int i = 0; i < n; i++) {
            root[find(i)]++;
            if (father[i] == i) {
                ok[i] = 1;
            }
        }

        // 检查每个集合是否完全连通
        for (int i = 0; i < n; i++) {
            if (const int size = root[father[i]]; deg[i] != size - 1) {
                ok[father[i]] = 0;
            }
        }

        // 计算完全连通分量的数量
        for (int i = 0; i < n; i++) {
            if (ok[i]) {
                ans++;
            }
        }

        return ans;
    }
};
