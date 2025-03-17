//link:https://leetcode.com/problems/calculate-digit-sum-of-a-string/description/







#include <iostream>
using namespace std;

string digitSum(string s, int k) {
    while (s.length() > k) {
        string new_s = "";
        for (size_t i = 0; i < s.length(); i += k) {
            int sum = 0;
            for (size_t j = i; j < i + k && j < s.length(); ++j) {
                sum += s[j] - '0'; // Convert char to int and sum
            }
            new_s += to_string(sum); // Append sum as string
        }
        s = new_s;
    }
    return s;
}

int main() {
    string s = "11111222223";
    int k = 3;
    cout << "Output: " << digitSum(s, k) << endl;
    return 0;
}