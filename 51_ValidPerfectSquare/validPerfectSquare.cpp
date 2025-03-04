// Problem 376, done in 04/03/2025

#include <iostream>

// integer overflow
bool isPerfectSquare(int num) {
    if (num == 1) return true;
    for (int i = 2; i <= num; i++) {
        if (i * i > num)
            break;
        else if (i * i == num)
            return true;
    }
    return false;
}


// integer overflow, use long long instead
bool isPerfectSquare2(int num) {
    int min = 1;
    int max = num / 2;
    long long middle;

    while (min <= max) {
        middle = (min + max) / 2;
        if (middle * middle == num) { return true;}
        else if (middle * middle > num) max = middle - 1;
        else if (middle * middle < num) min = middle + 1;
    }
    return false;
}


// finally
bool isPerfectSquare3(int num) {
    int min = 1;
    int max = num;
    int middle;

    while (min <= max) {
        middle = (min + max) / 2;
        if (num / middle == middle && num % middle == 0) { return true;}
        else if (num / middle >= middle) min = middle + 1;
        else if (num / middle <= middle) max = middle - 1;
    }
    return false;
}


int main() {
    std::cout << isPerfectSquare3(5);
}