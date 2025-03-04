
#include <cmath>
#include <vector>
#include <iostream>
#include <unordered_map>

// Time exceeded limit
bool containsNearbyDuplicate(std::vector<int> nums, int k) {
    for (int i = 0; i < nums.size()-1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j] && abs(i - j) <= k) {
                return true;
            }
        }
    }
    return false;
}

bool containsNearbyDuplicate(std::vector<int> nums, int k) {
    std::unordered_map<int, int> mp;
    int size = nums.size();
    
    for (int i = 0; i < size; i++) {
        if (mp.count(nums[i])) {   // checks if nums[i] is a key in mp
            if (abs(i - mp[nums[i]]) <= k) {
                return true;
            }
        }
        mp[nums[i]] = i;
    }
    return false;
}


int main() {
    std::cout << containsNearbyDuplicate({1,2,3,1,2,3}, 2) << '\n';
}