
#include <iostream>
#include <vector>

int removeElement (std::vector<int> nums, int val) {
    int count=0;
    int size = nums.size();
    // iterating backwards so when removing the element, don't skip the next one
    for (int i=size-1; i >=0 ; i--) {
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
            count++;
        }
    }
    return size - count;
}


int main()  {
    std::vector<int> nums{0,1,2,2,3,0,4,2};
    std::cout << removeElement(nums, 2) << '\n';
}