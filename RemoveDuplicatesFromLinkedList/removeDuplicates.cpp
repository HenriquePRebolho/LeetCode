
#include <iostream>

ListNode* deleteDuplicates(ListNode* head) {
    if (!head) return head;
    ListNode* current = head;
    while (current->next != NULL) {
        if (current->val == current->next->val) {
            current->next = current->next->next;
        } else {
            current = current->next;
        }
    }
    return head;
}

int main() {

}
