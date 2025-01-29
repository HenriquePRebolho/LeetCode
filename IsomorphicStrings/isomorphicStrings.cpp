
#include <iostream>
#include <vector>

bool isIsomorphic(std::string s, std::string t) {
    std::vector<int> ss (128);
    std::vector<int> tt (128);

    for (int i=0; i < s.length(); i++) {
        // verify the vector index according to the ascii from the string index
        if (ss[s[i]] != tt[t[i]]) {
            return false;
        }
        // needs to be i+1 so that both letters are "attached" to 
        // the index and won't validate for a different pair
        ss[s[i]] = i + 1;
        tt[t[i]] = i + 1;
        // for example:
        // ss[a] = 3 + 1; ss[b] = 3 + 1     &&        ss[r] = 5+1; ss[u] =5+1
        // then for the next iteration, if compares 'a' and 'r', won't validate:
        // if (ss[a]) != tt[r]) --> this will be true, since: ss[a]=4   !=   ss[r]=6
    }
    return true;
}

int main() {
    std::cout << isIsomorphic("bar", "foo") << '\n';
    std::cout << isIsomorphic("bbbaaaba", "aaabbbba") << '\n';
}


// DUMB DUMB DUMB
/*
bool cmp(std::pair<char, int>& a, std::pair<char, int>& b) { 
    return a.second < b.second; 
} 
 
// Function to sort the map according 
// to value in a (key-value) pairs 
void sort(std::map<char, int>& M) { 
    // Declare vector of pairs 
    std::vector<std::pair<char, int> > A; 
    // Copy key-value pair from Map 
    // to vector of pairs 
    for (auto& it : M) { 
        A.push_back(it); 
    } 
    // Sort using comparator function 
    sort(A.begin(), A.end(), cmp); 
} 

bool isIsomorphic(std::string s, std::string t) {
    if (s.length() != t.length()) return false;

    std::map<char, int> sMap{};
    std::map<char, int> tMap{};

    for (int i=0; i < s.length(); i++) {
        if (sMap.find(s[i]) == sMap.end()) {
            sMap[s[i]] = 1;
        } 
        else if (sMap.find(s[i]) != sMap.end()) {
            sMap[s[i]] += 1;
        }
        if (tMap.find(t[i]) == sMap.end()) {
            tMap[t[i]] = 1;
        } else if (tMap.find(t[i]) != tMap.end()) {
            tMap[t[i]] += 1;
        }
    }

    sort(sMap);
    sort(tMap);

    bool ans = false;

    auto itS = sMap.begin();
    auto itT = tMap.begin();
    while (itS != sMap.end()) {
        if (itS->second != itT->second) {
            ans = false;
            break;
        }
        ++itS;
        ++itT;
    }
    return ans;
}

*/


