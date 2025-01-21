
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxProfit(const std::vector<int>& prices) {
    int buy {prices[0]};
    int profit {0};

    for (int i=1; i < prices.size(); i++){
        if (prices[i] < buy) {
            buy = prices[i];
        }
         else if (profit < prices[i] - buy) {
            profit = prices[i] - buy;
         }
    }
    return profit;
}


int main() {
    
    std::vector<int> nums {7,1,5,3,6,4};

    std::cout << maxProfit(nums);
    std::cout << maxProfit({7,6,4,3,1});
}

