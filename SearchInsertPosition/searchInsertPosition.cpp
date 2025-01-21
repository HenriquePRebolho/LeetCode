
#include <iostream>
#include <vector>

int searchInsertPosition (std::vector<int>& nums, int target) {

    int index {};
    
    if (nums.empty()) { return 0; }
    

    for (int i=0; i < nums.size(); i++) {
        if (nums[i] == target || target < nums[i]) {
            index = i;
            break;
        }
        if (target > nums[i] && i == nums.size()-1) {
            index = i+1;
            break;
        }
    }

    return index;
}



int main() {


}