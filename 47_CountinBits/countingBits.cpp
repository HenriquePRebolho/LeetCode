// Leetcode problem 338, done in 24/02/2025

#include <vector>

std::vector<int> countBits(int n) {
    std::vector<int> ans;
    ans.push_back(0);
    int begin = 1;
    while (begin <= n) {
        int copy = begin;
        int sum = 0;
        while (copy > 0) {
            sum += copy & 1;
            copy = copy >> 1;
        }
        ans.push_back(sum);
        begin++;
    }
}


class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        
        for (int i = 0; i <= n; i++) {
            int sum = 0;
            int num = i;

            while (num != 0) {
                sum += num%2;
                num = num/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};


// better
class Solution {
    public:
        std::vector<int> countBits(int n) {
            std::vector<int> dp(n + 1, 0);
            int sub = 1;
    
            for (int i = 1; i <= n; i++) {
                if (sub * 2 == i) {
                    sub = i;
                }
    
                dp[i] = dp[i - sub] + 1;
            }
    
            return dp;        
        }
    };