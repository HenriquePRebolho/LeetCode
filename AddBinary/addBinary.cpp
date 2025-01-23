
#include <iostream>
#include <bitset>
#include <tgmath.h>
#include <algorithm> 

// not working
std::string addBinary(std::string a, std::string b) {
    int numA=0;
    int numB=0;

    for (int i=0; i < a.length(); i++) {
        if (a[a.length() - 1 - i] == '1') {
            numA += pow(2, i);
        }
    }
    for (int i=0; i < b.length(); i++) {
        if (b[b.length() - 1 - i] == '1') {
            numB += pow(2, i);
        }
    }
    std::cout << "numA:" << numA << " numB:" << numB << '\n';
    numA += numB;
    
    std::string res;

    while (numA >= 1) {
        if (numA % 2 == 0) {
            res += "0";
        } else {
            res += "1";
        }
        numA /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}


std::string addBinary2(std::string a, std::string b) {
    std::string s;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        
        if (i >= 0) {                // check i is not negative index
            carry += a[i--] - '0';   // add a[i] and then j-=1
        }
        if (j >= 0) {                // check j is not negative index
            carry += b[j--] - '0';   // add b[j] and then j-=1
        }
        s += carry % 2 + '0';        // if carry=1 add 1, if carry=2 add 0
        carry /= 2;                  // make sure carry is 0 for next iteration
    }
    std::reverse(begin(s), end(s));  // reverse the string
    return s;
}


int main() {
    std::cout << addBinary2("1010", "1011") << '\n';
}