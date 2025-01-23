
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int MooreVotingAlgorithm (std::vector<int> nums);

int majorityElement(std::vector<int> nums) {
    std::map<int, int> map {};

    for (int i : nums) {
        if (!map[i]) {
            map[i] = 1;
        } else {
            map[i] += 1;
        }
    }
    int cmp=0;
    int res=0;
    for (auto x : map) {
        if (x.second > cmp) {
            cmp = x.second;
            res = x.first;
        }
    }
    return res;
}


int main()  {
    std::cout << MooreVotingAlgorithm({2, 2, 1, 1, 1, 2, 2}) << '\n';
    std::cout << MooreVotingAlgorithm({3, 2, 3}) << '\n';
    std::cout << MooreVotingAlgorithm({-1,1,1,1,2,1}) << '\n';
}

// easier to understand, less efficient
int majorityElement2(std::vector<int> nums) {
    sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
}

// Moore Voting Algorithm:
int MooreVotingAlgorithm (std::vector<int> nums) {
    int count = 0;
    int candidate = 0;

    for (int i : nums) {
        if (count == 0) {
            candidate = i;
        }
        if (i == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}