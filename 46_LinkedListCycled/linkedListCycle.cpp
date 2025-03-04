// Leetcode problem 206, done in 24/02/2025

#include <iostream>
#include <unordered_map>
#include <map>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// nope
bool hasCycle(ListNode *head) {
    if (!head) return false;

    std::unordered_map<int, int> map;
    int index = 0;
    while (head->next) {
        if (map[index] <= index) return true;
        map[head->val] = index;
        head = head->next;
        index++;
    }
    return false;
}


// yep
bool hasCycle2(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    } 
    return false;
}

// also yep
bool hasCycle(ListNode* head) {
    if (head == NULL) {
        return false;
    }
    std::map<ListNode*, bool> visited;
    ListNode* temp = head;

    while (temp != NULL) {
        if (visited[temp] == true) {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main() {
    std::unordered_map<int, int> map;
    map[0] = 1;
    std::cout << map[2];
}