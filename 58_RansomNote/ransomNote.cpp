
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

bool canConstruct(std::string ransomNote, std::string magazine) {
    std::map<char, int> r {};
    std::map<char, int> m {};
    

    for (char c : ransomNote) {
        r[c]++;
    }
    for (char c : magazine) {
        m[c]++;
    }
    for (auto x : r) {
        if (m[x.first] - x.second < 0) {
            return false;
        }
    }
    return true;
}

bool canConstruct2(std::string ransomNote, std::string magazine) {
    std::sort(ransomNote.begin(), ransomNote.end());
    std::sort(magazine.begin(), magazine.end());
    int r = 0;

    for (char c : magazine) {
        if (c > ransomNote[r]) {
            return false;
        }
        if (c == ransomNote[r]){
            r++;
            if (r > ransomNote.length()) break;
        }
    }
    return r < ransomNote.length() ? false : true;
}

int main() {
    std::cout << canConstruct2("fihjjjjei", "hjibagacbhadfaefdjaeaebgi") << '\n';
}