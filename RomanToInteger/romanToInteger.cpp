#include <iostream>
#include <unordered_map>
/* 
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/

int main(){

    std::string s {"LXXVIII"};
    int num {0};

    for (int i=0; i < s.length(); i++) {

        char c = s[i];
        
        switch (c)  
        {
        case 'I': { 
            if (s[i+1] == 'V' && i < s.length()-1) {
                num += 4;
                i += 1; 
                
            } 
            else if (s[i+1] == 'X' && i < s.length()-1){
                num += 9;
                i += 1;
            }            
            else {
                num += 1;
            }
            break;
        } 
        case 'V': {
            num += 5;
            break;
        }
        case 'X':
            if (s[i+1] == 'C' && i < s.length()-1) {
                num += 90;
                i += 1;
            } 
            else if (s[i+1] == 'L' && i < s.length()-1) {
                num += 40;
                i += 1;
            }
            else {
                num += 10;
            }
            break;
        case 'L': {
            num += 50;
            break;
        }
        case 'C':
            if (s[i+1] == 'M' && i < s.length()-1) {
                num += 900;
                i += 1;
            } 
            else if (s[i+1] == 'D' && i < s.length()-1) {
                num += 400;
                i += 1;
            }
            else {
                num += 100;
            }
            break;
        case 'D': { 
            num += 500;
            break;
        }
        case 'M': {
            num += 1000;
            break;
        }
        };
    }
    std::cout << num;
}


// Another possible solution: using weights for each letter
class Solution {
public:
    int romanToInt(std::string s) {
        std::  unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }
        return ans;
    }
};