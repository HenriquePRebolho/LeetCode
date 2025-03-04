
#include <iostream>
#include <algorithm>
#include <vector>

int missingNumber(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if (nums[0] != 0) return 0;
    int size = nums.size();
    for (int i=1; i < size; i++) {
        if (nums[i] - 1 != nums[i-1]) return i;
    }
    return size;
}


int missingNumber2(std::vector<int>& nums) {
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    return sum - std::accumulate(nums.begin(), nums.end(), 0);
}


int missingNumber3(std::vector<int>& nums) {
    int n = nums.size();
    int ans =0;
    for(int i =1;i<=n;i++){
        ans = ans ^ i;
    }
    for(int i =0;i<nums.size();i++){
        ans= ans^nums[i];
    }
    return ans;  
}