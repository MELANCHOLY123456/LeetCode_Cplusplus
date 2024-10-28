//
// Created by Administrator on 24-10-27.
//

#include <vector>

class Solution {
public:
    bool dfs(const int source, const int destination, std::vector<std::vector<int> > &adj, std::vector<bool> &visited) {
        if (source == destination) {
            return true;
        }
        visited[source] = true;
        for (const int next: adj[source]) {
            if (!visited[next] && dfs(next, destination, adj, visited)) {
                return true;
            }
        }
        return false;
    }

    bool validPath(const int n, std::vector<std::vector<int> > &edges, const int source, const int destination) {
        std::vector<std::vector<int> > adj(n);
        for (auto &edge: edges) {
            int x = edge[0], y = edge[1];
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        std::vector<bool> visited(n, false);
        return dfs(source, destination, adj, visited);
    }
};
