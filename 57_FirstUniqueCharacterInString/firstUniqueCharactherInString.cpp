// Leetcode problem 387, done in 01/04/2025

#include <unordered_map>
#include <string>
#include <iostream>

int firstUniqueChar(std::string s) {
    std::unordered_map<char, int> m {};

    for (int i = 0; i < s.length(); i++) {
        // if char already is in map
        if (m.count(s[i])) {
            m[s[i]] = -1; //  
        } else {
            m[s[i]] = i;
        }
    }
    int ans = s.length();
    for (auto x : m) {
        if (x.second < ans && x.second != -1) {
            ans = x.second;
        }
    }
    return ans;
}

int firstUniqueChar2(std::string s) {
    std::unordered_map<char, int> m {};

    for (char c : s) {
            m[c]++;
        }
    
    for (int i = 0; i < s.length(); i++) {
        if (m[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}


int main() {

    std::cout << firstUniqueChar("leetcode") << '\n';



}


