
#include <algorithm>
#include <string>
#include <unordered_map>

// more efficient
bool isAnagram(std::string s, std::string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            return false;
        }
    }
    return true;
    // or simply: return s == t;
}

bool isAnagram2(std::string s, std::string t) {
    std::unordered_map<char, int> count;

    for (auto x : s) {
        count[x]++;
    }
    for (auto x : t) {
        count[x]--; 
    }
    for (auto x : count) {
        if (x.second != 0) {
            return false;
        }
    }
    return true;
}
