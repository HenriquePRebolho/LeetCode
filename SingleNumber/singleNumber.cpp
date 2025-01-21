
#include <iostream>
#include <vector>
#include <unordered_map>

int singleNumber(const std::vector<int>& nums) {
    
    std::unordered_map<int, int> aux {};

    for (int i=0; i < nums.size(); i++) {
        aux[nums[i]] += 1;
    }
    for (auto x : aux)  {
        std::cout << x.first << " " << x.second << '\n';
        if (x.second == 1) {
            return x.first;
        }
    }
    return -1;
}

int main() {
    //std::cout << singleNumber({2, 2, 1});
    std::cout << singleNumber({4, 1, 2, 1, 2});
    //std::cout << singleNumber({1});

}

int another(std::vector<int>& nums) {
    int res {0};
    for (int x : nums) {
        res ^= x;
    }
    return res;
}