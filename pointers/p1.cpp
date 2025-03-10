#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());  // Sort greed factors
        sort(s.begin(), s.end());  // Sort cookie sizes
        
        int i = 0, j = 0;  // Pointers for children and cookies
        int count = 0;     // Number of content children
        
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {  // If cookie satisfies the child
                count++;
                i++;  // Move to next child
            }
            j++;  // Move to next cookie
        }
        
        return count;
    }
};

int main() {
    Solution solution;

    vector<int> g1 = {1, 2, 3};
    vector<int> s1 = {1, 1};
    cout << "Example 1 Output: " << solution.findContentChildren(g1, s1) << endl; // Output: 1

    vector<int> g2 = {1, 2};
    vector<int> s2 = {1, 2, 3};
    cout << "Example 2 Output: " << solution.findContentChildren(g2, s2) << endl; // Output: 2

    return 0;
}
