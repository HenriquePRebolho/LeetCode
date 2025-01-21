
#include <iostream>
#include <vector>
//#include <sort>

std::string largestCommonPreffix (std::vector<std::string>& strs) {

    std::string res {};
    int min {static_cast<int>(strs[0].length())};

    for (std::string s : strs) {
        if (s.length() < min)  {
            min = s.length();
        }
    }

    for (int i=0; i < min; i++) {
        char c {strs[0][i]};
        bool aux {true};
        for (std::string s : strs) {
            if (s[i] == c){
                aux &= true;
            }
            else {
                aux &= false;
            }
        }
        if (aux == true) {
            res += c;
        }
        else {
            break;
        }
    }
    return res.empty() ? "" : res;

}


int main() {


}
/*
std::string largestCommonPreffix2 (std::vector<std::string>& strs){

    std::string res {""};
    sort(strs.begin(), strs.end());
    int n {strs.size()};
    std::string first {strs[0]}, last {strs[n-1]};

    for (int i=0; i < n; i++) {
        if (first[i] != last[i]) {
            return res;
        }
        res += first[i];
    }
    return res;
}
*/