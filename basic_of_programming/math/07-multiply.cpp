//
// Created by Administrator on 24-10-20.
//

#include <string>
#include <vector>

class Solution {
public:
    static std::string multiply(const std::string& num1, const std::string& num2) {
        std::vector<int> A, B;
        const int n = static_cast<int>(num1.size());
        const int m = static_cast<int>(num2.size());
        for(int i = n - 1; i>=0; i--) A.push_back(num1[i] - '0');
        for(int i = m - 1; i>=0; i--) B.push_back(num2[i] - '0');
        std::vector<int> C(n + m);
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                C[i+j] += A[i] * B[j];

        for(int i = 0, t = 0; i<C.size(); i++){
            t += C[i];
            C[i] = t % 10;
            t /= 10;
        }

        int k = C.size() - 1;
        while(k>0 && !C[k]) k--;

        std::string res;
        while(k >= 0) res += C[k --] + '0';
        return res;
    }
};
