
#include <string>
#include <algorithm>
#include <stack>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {
    std::string s = "";
    while (head) {
        s += head->val;
    if (head->next) head = head->next;
        else break;
    }
    std::string copy = s;
    reverse(s.begin(), s.end());
    return s == copy;
}

bool isPalindrome2(ListNode* head) {
    std::string s = "";
    while (head) {
        s += head->val;
        if (head->next) head = head->next;
        else break;
    }
    int size = s.length();
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length()-1-i]) {
            return false;
        }  
    }
    return true;
}

// realy cool
bool isPalindrome3(ListNode* head) {
    std::stack<int> stack;
    ListNode* curr = head;
    while (curr) {
        stack.push(curr->val);
        curr = curr->next;
    }
    curr = head;
    while (curr && curr->val == stack.top()) {
        stack.pop();
        curr = curr->next;
    }
    return curr == nullptr; 
}
