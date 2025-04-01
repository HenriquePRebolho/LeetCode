// Leetcode problem 441, done in 28/02/2025

#include <iostream>
#include <cmath>

int arrangeCoins(int n) {
    int ans = 0;

    for (int i = 0; n - i >= 0; i++) {
        n -= i;
        ans = i;
    }
    return ans;
}

// Math solution
int arrangeCoins2(int n) {
    return (- 1 + std::sqrt(1 + 8 * (long long) n )) / 2;
}

int main() {
    std::cout << arrangeCoins(5) << '\n';
}