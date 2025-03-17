
//https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR operation
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 3};  // Expected output: 3
    int x = sol.singleNumber(nums);
    cout << "Single number: " << x << endl;
    return 0;
}



/*
0 ^ 2 = 2
2 ^ 2 = 0  (cancels out 2)
0 ^ 3 = 3  (unique number remains)

*/