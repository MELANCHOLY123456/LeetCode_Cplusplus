//
// Created by Administrator on 24-10-21.
//

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {
    }

    explicit ListNode(const int x) : val(x), next(nullptr) {
    }

    ListNode(const int x, ListNode* next) : val(x), next(next) {
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
};
