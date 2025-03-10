//valid palindrome
//https://leetcode.com/problems/valid-palindrome/

#include <iostream>
#include <cctype> // For tolower() and isalnum()
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        
        // Step 1: Convert to lowercase and remove non-alphanumeric characters
        for (char c : s) {
            if (isalnum(c)) { // Check if it's a letter or number
                filtered += tolower(c); // Convert to lowercase and add to new string
            }
        }

        // Step 2: Check if it's a palindrome
        int left = 0, right = filtered.size() - 1;
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }
        return true; // It's a palindrome
    }
};

int main() {
    Solution sol;
    bool x = sol.isPalindrome("A man, a plan, a canal, Panama");
    cout << (x ? "true" : "false") << endl; // Expected output: true
    return 0;
}
