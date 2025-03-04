// Leetcode problem 160, "done" in 25/02/2025

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next() {}
};


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int skA = 0;
    int skB = 0;
    int intersec = 0;
    getIntersectionNode(headA, skA, headB, skB, intersec);
    return headA;
}

void *getIntersectionNode(ListNode *headA, int skA, ListNode *headB, int skB, int intersec) {
    if (!headA && !headB || !headA->next && !headB->next) return 0;

    if (headA->next == headB->next) {
        headA = headA->next;
    }

    if (headA->next != headB->next) {
        getIntersectionNode(headA->next, skA+1, headB, skB, intersec);
        getIntersectionNode(headA, skA+1, headB->next, skB+1, intersec);
    }

}


// 
ListNode *getIntersectionNode2(ListNode *headA, ListNode *headB) {
    ListNode* temp;

    while (headA != NULL) {
        temp = headB;
        while (temp != NULL) {
            if (temp == headA) {
                return headA;
            }
            temp = temp->next;
        }
        headA = headA->next;
    }
    return NULL;
}