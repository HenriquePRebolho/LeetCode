// Leetcode problem 232, in 19/02/2025

#include <vector>
#include <queue>

class MyQueue {
private: 
    std::queue<int> input;
    std::queue<int> output;
    
public:
    MyQueue() {
            
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        peek();
        int val = output.front();
        output.pop();
        return val;
    }
    
    int peek() {
        int ans;
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.front());
                input.pop();
            }
        }
        return output.front();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

