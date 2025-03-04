
#include <string>
#include <iostream>
#include <algorithm>

// nope
bool isPowerOfTwo(int n) {
    std::string bin = "";
    while (n > 0) {
        int bit  = n & 1;
        bin.push_back('0' +  bit);
        n = n >> 1;
    }
    std::reverse(bin.begin(), bin.end());

    std::cout << "bin" << bin << '\n';
    
    for (int i = 1; i < bin.length(); i++){
        if (bin[i] == 1) {
            return false;
        }
    }
    return true;
}

// almost (integer overflow)
bool isPowerOfTwo2(int n) {
    int num = 1;
    while (num <= n) {
        if (num*2 > n) {
            break;
        }
        num *= 2;
    }
    return num == n || n == 0;
}


bool isPowerOfTwo3(int n) {
    if (n <= 0) return false;   
    while (n > 2) {
        if (n % 2 == 1) {
            return false;
        }
        n /= 2;
    }
    return true;
}


int main() {
    std::cout << isPowerOfTwo(16) << '\n';
    std::cout << 15 / 2 << '\n';
    std::cout << 1 / 2 << '\n';
}