//
// Created by Administrator on 24-10-19.
//

#include <string>
#include <vector>

class Solution {
public:
    static int calPoints(std::vector<std::string>& operations) {
        int ans = 0;
        std::vector<int> points;
        for (auto& op : operations) {
            const size_t len = points.size();
            switch (op[0]) {
            case '+':
                ans += points[len - 1] + points[len - 2];
                points.push_back(points[len - 1] + points[len - 2]);
                break;
            case 'D':
                ans += points[len - 1] * 2;
                points.push_back(points[len - 1] * 2);
                break;
            case 'C':
                ans -= points[len - 1];
                points.pop_back();
                break;
            default:
                ans += std::stoi(op);
                points.push_back(std::stoi(op));
                break;
            }
        }
        return ans;
    }
};

/*
 *在C++中，std::stoi是一个标准库函数，用于将字符串转换为整数。
 *它的全称是 "string to integer"。
 *这个函数属于<string>头文件中，可以处理字符串并将其转换为相应的整数值。
 */
