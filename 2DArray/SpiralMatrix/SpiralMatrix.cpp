#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int count = 0;
        int m = matrix.size(); //no. of rows 
        int n = matrix[0].size();  //no. of cols
        int left = 0, right = n - 1, top = 0, bottom = m - 1;
        int total_ele = m * n;
        vector<int> v;
        while (count < total_ele) {
            for (int i = left; i <= right && count < total_ele; i++) {
                v.push_back(matrix[top][i]);
                count++;
            }
            top++;

            for (int i = top; i <= bottom && count < total_ele; i++) {
                v.push_back(matrix[i][right]);
                count++;
            }
            right--;

            for (int i = right; i >= left && count < total_ele; i--) {
                v.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;

            for (int i = bottom; i >= top && count < total_ele; i--) {
                v.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return v;
    }
};




int main(){

    std::vector<std::vector<int>> matrix = {
    {1, 2,3,8},
    {4,5,6,8},
    {7,8,9,8}
    };

    Solution sol;

    vector<int> output = sol.spiralOrder(matrix);

    for (auto i : output )
    {

        cout << i << " ";

    }

    return 0;

}