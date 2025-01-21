// Problem 26 Leetcode

#include <iostream>
#include <vector>

int main(){

        std::vector<int> nums {0, 0, 1, 1, 1, 1, 2, 2, 3, 3, 4};
        int k = 1;
           
        for (int i=1; i < nums.size(); i++) {
            if (nums[1] != nums[k-1]) {
                nums[k] = nums[i];          // Doesn't matter if the last number repeats
                k++;
            }
        }


    std::cout << nums.size();
}