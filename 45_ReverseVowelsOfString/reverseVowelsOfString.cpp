// Leetcode problem 345, done in 21/02/2025

#include <string>
#include <vector>
#include <iostream>
#include <string.h>

std::string reverseVowels(std::string s) {
    int right = s.length() - 1;
    const std::string vowels = "aeiouAEIOU";

    for (int left = 0; left < s.length(); left++) {
        
        if (vowels.find(s[left]) != std::string::npos 
                && vowels.find(s[right]) != std::string::npos) {
            std::swap(s[left], s[right]);
            right--;
        } else if (vowels.find(s[left]) != std::string::npos 
                && vowels.find(s[right]) == std::string::npos) {
            left--;
            right--;
        }
        if (right - left <= 1) break;
    }
    return s;
}


std::string reverseVowels2(std::string s) {
    char[] word = s.toCharArray();
    int start = 0;
    int end = s.length() - 1;
    String vowels = "aeiouAEIOU";
    
    while (start < end) {
        // Move start pointer until it points to a vowel
        while (start < end && vowels.indexOf(word[start]) == -1) {
            start++;
        }
        
        // Move end pointer until it points to a vowel
        while (start < end && vowels.indexOf(word[end]) == -1) {
            end--;
        }
        
        // Swap the vowels
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        
        // Move the pointers towards each other
        start++;
        end--;
    }
    
    String answer = new String(word);
    return answer;
    
}

int main() {
    std::cout << reverseVowels("IceCreAm");
}