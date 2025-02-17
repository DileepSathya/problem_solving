//https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/description/
//contigous segment of 1's and 0's
#include <iostream>
#include <string>

using std::string;

bool contiguous_segment(const string &s) {
    int streak_1 = 0, streak_0 = 0;
    
    for (size_t i = 0; i < s.length() - 1; i++) { 
        if (s[i] == '1' && s[i + 1] == '1') {
            streak_1++;
        }
        if (s[i] == '0' && s[i + 1] == '0') {
            streak_0++;
        }
    }

    return streak_1 > streak_0;
}

int main() {
    std::string s;

    for (int i = 0; i < 10; i++) {
        char ch;
        std::cin >> ch;  

        if (ch != '0' && ch != '1') { 
            std::cerr << "Invalid input. Only '0' and '1' are allowed." << std::endl;
            return 1; 
        }

        s += ch;
        std::cout << s << std::endl;
    }

    bool result=contiguous_segment(s);
    std::cout<< result<<std::endl;
    

    return 0;
}
