
#include <iostream>

int lengthOfLastWord(std::string s) {
    int res{};
    for (int i = s.length()-1; i > 0; i--) {
        if (s[i] == ' ' && res != 0) {
            break;
        } 
        else if (s[i] != ' ') {
            res += 1;
        }
    }
    return res;
}


int main() {

    std::cout << lengthOfLastWord("Hello World");

}