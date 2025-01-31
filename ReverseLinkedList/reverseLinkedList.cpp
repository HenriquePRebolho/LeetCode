
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    if (!head) return head;
    
    std::vector<int> aux;
    aux.insert(aux.end(), head->val);
    while (head->next) {
        aux.insert(aux.begin(), head->next->val);
        head = head->next;
    }
    ListNode* ans;
    for (int i = 0; i < aux.size(); i++) {
        ans->val = aux[i];
        ans = ans->next;
    }
    return ans;
}



ListNode* reverseList2(ListNode* head) {
    if (!head) return head;

    if (!head->next) {
        ListNode final;
        
    }
}

