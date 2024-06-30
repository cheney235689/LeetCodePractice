#include <iostream>
#include <vector>


class Solution {
public:

    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& mat) {

        if (mat.empty() || mat[0].empty()) {
            return {};
        }
        int m = mat.size(), n = mat[0].size(), r = 0, c = 0, k = 0;
        std::vector<int> res(m * n);
        std::vector<std::vector<int>> dirs{ {-1,1}, {1,-1} };
        for (int i = 0; i < m * n; ++i) {
            res[i] = mat[r][c];
            r += dirs[k][0];
            c += dirs[k][1];
            if (r >= m) {
                r = m - 1; c += 2; k = 1 - k;
            }
            if (c >= n) {
                c = n - 1; r += 2; k = 1 - k;
            }
            if (r < 0) {
                r = 0; k = 1 - k;
            }
            if (c < 0) {
                c = 0; k = 1 - k;
            }
        }
        return res;

    }
};

int main()
{
    std::vector<std::vector<int>> array = {
    {1, 2,3},
    {4,5,6},
    {7,8,9}
    };

    Solution sol;


    std::cout << "Input 2D array:" << std::endl;
    for (auto a : array)
    {
        for (auto b : a)
        {
            std::cout << b << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Output diagonal order array:" << std::endl;
    std::vector<int> answer = sol.findDiagonalOrder(array);


    for (auto c : answer)
    {
        std::cout << c << " ";
    }



    return 0;
}