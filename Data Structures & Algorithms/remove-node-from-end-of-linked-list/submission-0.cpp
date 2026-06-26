/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = 0;
        ListNode* temp = head;
        while (temp) {
            temp = temp->next;
            m++;
        }
        int r = m - n;
        if (r == 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* temp2 = head;
        for (int i = 0; i < r; i++) {
            prev = temp2;
            temp2 = temp2->next;
        }
        prev->next = temp2->next;
        delete temp2;

        return head;
    }
};