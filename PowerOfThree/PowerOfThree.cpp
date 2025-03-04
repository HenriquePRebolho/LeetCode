
#include <iostream>
#include <cmath>

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    double ac = 3;
    for (int i = 1; ac <= n; i++) {
        ac = pow(3, i);
        if (ac == n) return true;
    }
    return false;
}

// much better
bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
}

int main() {
    std::cout << isPowerOfThree(45) << '\n';
}
