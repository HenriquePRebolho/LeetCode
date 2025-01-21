
#include <iostream>

int strStr(std::string haystack, std::string needle) {

    if (haystack.length() < needle.length()) {return -1;}
    bool aux {true};
    int res {-1};

    for (int i=0; i < haystack.length(); i++) {
        if (haystack[i] == needle[0] && haystack.length()-i >= needle.length()) {
            //int index {1};
            for (int index=1; index < needle.length(); index++) {
                if (haystack[index+i] != needle[index]) {
                    aux = false;
                    break;
                } else {
                    aux = true;
                }
            }
            if (aux == true) {
                res = i;
                break;
            }
        }
    }
    return res;
}

int main(){

    //std::cout << strStr("sadbutsad", "sad") << '\n';
    std::cout << strStr("leetcode", "leeto") << '\n';
    //std::cout << strStr("hello", "ll") << '\n';
    std::cout << strStr("mississippi", "issip") << '\n';

}

