#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        std::string result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i -= 1;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j -= 1;
            }
            carry = sum / 2;
            result += (sum % 2) + '0';
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;
    std::string a = "10";
    std::string b = "1011";
    std::cout << "Result: " << sol.addBinary(a, b) << std::endl;

    return 0;
}