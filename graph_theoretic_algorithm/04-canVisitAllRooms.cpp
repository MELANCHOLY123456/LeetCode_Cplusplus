//
// Created by Administrator on 24-10-28.
//

#include <vector>

class Solution {
public:
    std::vector<int> visit;
    int num;

    void dfs(std::vector<std::vector<int> > &rooms, const int x) {
        visit[x] = true;
        num++;
        for (const auto &it: rooms[x]) {
            if (!visit[it]) {
                dfs(rooms, it);
            }
        }
    }

    bool canVisitAllRooms(std::vector<std::vector<int> > &rooms) {
        const int length = static_cast<int>(rooms.size());
        num = 0;
        visit.resize(length);
        dfs(rooms, 0);
        return num == length;
    }
};
