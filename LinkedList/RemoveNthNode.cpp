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

        int size = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        if (n == size) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        ListNode* curr = head;
        for (int i = 1; i < size - n; i++) {
            curr = curr->next;
        }

        temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};