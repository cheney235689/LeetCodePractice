#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};




int main() {
    vector<int> nums = { 1,8, 7, 3, 6, 5, 6 , 8 };
    Solution sol;
    int pivot = sol.pivotIndex(nums);
    if (pivot != -1) {
        cout << "Pivot index found at: " << pivot << endl;
    }
    else {
        cout << "No pivot index found." << endl;
    }
    return 0;
}