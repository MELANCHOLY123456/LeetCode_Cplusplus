//
// Created by Administrator on 24-10-27.
//

#include <vector>

class Solution {
public:
    void static DFS(std::vector<std::vector<int> > &isConnected, std::vector<int> &visited, const int cities,
                    const int i) {
        for (int j = 0; j < cities; ++j) {
            if (isConnected[i][j] == 1 && !visited[j]) {
                visited[j] = 1;
                DFS(isConnected, visited, cities, j);
            }
        }
    }

    static int findCircleNum(std::vector<std::vector<int> > &isConnected) {
        const int cities = static_cast<int>(isConnected.size());
        std::vector<int> visited(cities);
        int provinces = 0;
        for (int i = 0; i < cities; i++) {
            if (!visited[i]) {
                DFS(isConnected, visited, cities, i);
                provinces++;
            }
        }
        return provinces;
    }
};
