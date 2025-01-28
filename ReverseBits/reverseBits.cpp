
#include <iostream>
#include <algorithm> 
#include <cstdint>

std::uint32_t reverseBits(uint32_t n) {
    n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
    n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
    n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
    n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
    n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
    return n;
}

std::uint32_t reverseBits2(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; i++) {
        int bit = n & 1;       // Extract the least significant bit
        result = (result << 1) | bit; // Append the bit to the result
        n = n >> 1;           // Right-shift n to process the next bit
    }
    return result;
}

int main() {
    std::uint32_t a = 0b00000010100101000001111010011100;
    std::cout << reverseBits2(a);
}
