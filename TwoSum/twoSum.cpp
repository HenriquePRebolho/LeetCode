#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        std::vector <int> res {};

        for (int i=0; i < nums.size()-1; i++) {
            for (int j=i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target ){
                    res.insert(res.begin(), i);
                    res.insert(res.begin()+1, j);
                    break;
                }
            }
            if (!res.empty()) { break; }
        }
        return res;
    }
};