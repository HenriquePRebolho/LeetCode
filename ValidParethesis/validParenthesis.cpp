
#include <iostream>
#include <vector>

bool validParenthesis (std::string s) {

std::vector<char> stack{};

    if (s.length() % 2 == 1) {
        return false;
    }
    for (int i=0; i < s.length(); i++){
        char c {s[i]};
        switch (c) {
        case('('):
            stack.push_back(c);
            break;
        case('{'):
            stack.push_back(c);
            break;
        case('['):
            stack.push_back(c);
            break;
        case(')'): {
            if (stack.empty() || stack.back() != '(') {
                return false;
                break;
            } else {
                stack.pop_back();
                break;
            }
        }
        case('}'): {
            if (stack.empty() || stack.back() != '{') {
                return false;
                break;
            } else {
                stack.pop_back();
                break;
            }
        }
        case(']'): {
            if (stack.empty() || stack.back() != '[') {
                return false;
                break;
            } else {
                stack.pop_back();
                break;
            }
        }
        };
    }
    if (!(stack.empty())) {
        return false;
    }
    return true;
    }


int main () {

    // std::cout << validParenthesis("()\n");
    std::cout << validParenthesis("){\n");
    std::cout << validParenthesis("()[]{}\n");
    // std::cout << validParenthesis("()\n");
    std::cout << validParenthesis("([])\n");

}
