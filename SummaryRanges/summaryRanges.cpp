
#include <vector>
#include <string>
#include <iostream>
#include <format>

std::vector<std::string> summaryRanges(std::vector<int> nums) {
    std::vector<std::string> ans;
    if (nums.empty()) return ans;
    int a = nums[0];
    for (int i = 1; i <= nums.size(); i++) {
        if (i == nums.size() || nums[i] != nums[i-1] + 1) {
            if (a == nums[i-1]) {
                ans.push_back(std::to_string(a));
            } else {
                ans.push_back(std::to_string(a) + "->" + std::to_string(nums[i-1]));
            }
            if (i < nums.size()) a = nums[i];
        }
    }
    return ans;
}

