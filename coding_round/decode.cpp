//decode string
//https://leetcode.com/problems/decode-the-message/description/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> my_map;
        char current_char = 'a';

        // Construct the mapping
        for (char ch : key) {
            if (ch != ' ' && my_map.find(ch) == my_map.end()) {
                my_map[ch] = current_char;
                current_char++;
            }
        }

        // Decode the message
        string decoded_message;
        for (char ch : message) {
            if (ch == ' ') {
                decoded_message += ' ';
            } else {
                decoded_message += my_map[ch];
            }
        }
        return decoded_message;
    }
};

int main() {
    Solution sol;
    string x = sol.decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv");
    cout << x << endl; // Expected output: "this is a secret"
    return 0;
}
