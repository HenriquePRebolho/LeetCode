// Problem 392, done in 27/03/2025

#include<string>

bool isSubsequence(std::string s, std::string t) {
    int a = 0;

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == s[a]) {
            a++;
        }
    }
    return a == s.length();
} 