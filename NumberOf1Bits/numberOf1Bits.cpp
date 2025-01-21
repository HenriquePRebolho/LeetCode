
#include <iostream>
#include <bitset>

int hammingWeight(int n) {
    
    const int s = sizeof(n);
    //requires const size
    std::bitset<s> binary (n);
    binary = ~binary;
    return n - binary.to_ulong();
}

int hammingWeight2(int n) {
    int res {0};
    while (n > 0) {
        res += n & 1;
        n >>= 1;
    }
    return res;
}


int main() {
    std::cout << hammingWeight2(1) << '\n';
    std::cout << hammingWeight2(4) << '\n';
    std::cout << hammingWeight2(11) << '\n';
    std::cout << hammingWeight2(128) << '\n';

}