#include <iostream>
#include <string>

using namespace std;

int findLUSlength(string a, string b) {
    if (a == b)
        return -1;
    return max(a.length(), b.length());
}

int main() {
    cout << findLUSlength("aba", "cdc") << endl;  // Output: 3
    cout << findLUSlength("aaa", "bbb") << endl;  // Output: 3
    cout << findLUSlength("aaa", "aaa") << endl;  // Output: -1
    return 0;
}
