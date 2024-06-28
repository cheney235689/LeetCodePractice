#include<iostream>
#include<vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        // If we're here it means all the digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};


int main() 
{
    Solution sol;
    std::vector<int> digits = {9,9,9,9,9,9};
    std::vector<int> answer = sol.plusOne(digits);

    for (int element : answer) 
    {
        std::cout << element<<" ";
    }


    
    

}