#include <iostream>
#include <vector>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        if (nums.size() == 1) return 0;  // �p�G�Ʋդ��u���@�Ӥ����A�h�����M�O�̤j���B�ŦX����

        int maxIndex = 0;
        // ���Ʋդ��̤j�������Ψ����
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }

        // �ˬd�O�_���������ŦX����G�̤j�������ܤ֬O��L�C�Ӥ������⭿
        for (int i = 0; i < nums.size(); ++i) {
            if (i != maxIndex && nums[maxIndex] < 2 * nums[i]) {
                return -1;
            }
        }
        return maxIndex;
    }
};

int main() 
{

    std::vector<int> nums = { 3,4,5,1,0 };
    Solution sol;
    int answer = sol.dominantIndex(nums);

    if (answer != -1) {
        std::cout <<  answer << " largest integer exist" << std::endl;
    }
    else {
        std::cout << " largest integer does not exist" << std::endl;
    }
    return 0;
}