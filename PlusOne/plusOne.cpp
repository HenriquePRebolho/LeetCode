
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> plusOne (std::vector<int>& digits) {

    std::reverse(digits.begin(), digits.end());

    for (int i=0; i < digits.size(); i++){
        digits[i] += 1;
        if (digits[i] != 10) {
            break;
        } 
        if (digits[i] == 10 && i == digits.size()-1) {
            digits[i] -= 10;
            digits.insert(digits.begin() + digits.size(), 1);
            break;
        } else if (digits[i] == 10) {
            digits[i] -= 10;
        }
    }
    std::reverse(digits.begin(), digits.end());

    return digits;
}



int main() {


}

