#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (const string &detail : details) {
            int age = stoi(detail.substr(11, 2)); // Extracts the age from the string
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    int x = sol.countSeniors(details);
    
    cout << "Number of senior citizens: " << x << endl; // Print the result
    return 0;
}
