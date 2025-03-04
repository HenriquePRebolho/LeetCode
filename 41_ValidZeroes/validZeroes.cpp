// LeetCode problem 283, done in 18/02/2025

#include <vector>
#include <algorithm>

// works, but inneficient
void validZeroes(std::vector<int> nums) {
    int zeroes = 0; 
    for (int x : nums) {
        if (x == 0) zeroes++;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            nums.push_back(nums[i]);
            nums.erase(nums.begin() + i);
            i--;
            zeroes--;
        }
        if (zeroes == 0) break;
    }
}

// nice
void moveZeroes2(std::vector<int>& nums) {
    int left = 0;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            std::swap(nums[right], nums[left]);
            left++;
        }
    }        
}
