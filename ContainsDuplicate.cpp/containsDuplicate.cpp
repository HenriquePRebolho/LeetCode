
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

bool containsDuplicate(std::vector<int>& nums) {
    bool ans = false;
    std::map<int, int> aux{};

    for (int i=0; i < nums.size(); i++){
        int num = nums[i];
        aux[num] += 1;
    }
    map<int, int>::iterator it = aux.begin();
    while (it != aux.end())  {
        if (it->second > 1) {
            ans = true;
            break;
        }
        ++it;
    }
    return ans;
}

// best option
bool containsDuplicate2(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i-1]) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> nums {1,2,3,4};
    std::cout << containsDuplicate(nums) << '\n';
    std::cout << containsDuplicate2(nums) << '\n';
}