#include <vector>
#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> myset; // Use set to store unique indices

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                for (int j = 0; j < nums.size(); j++) {
                    if (abs(i - j) <= k) {
                        myset.insert(j);
                    }
                }
            }
        }

        return vector<int>(myset.begin(), myset.end()); // Convert set to vector
    }
};

int main() {
    Solution sol;
    vector<int> g1 = {3, 4, 9, 1, 3, 9, 5};
    int key = 9;
    int k = 1;

    vector<int> result = sol.findKDistantIndices(g1, key, k);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
