
#include <iostream>

ListNode* removeElements(ListNode* head, int val) {
    if (!head) return head;
    ListNode* aux;
    if (head->val == val) {
        aux = removeElements(head->next, val);
        head = aux;
    }
    else if (head->next) {
        aux = removeElements(head->next, val);
        head->next = aux;
    }
    return head;
}
