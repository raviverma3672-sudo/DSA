class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Edge cases: empty list, single node, or no rotation needed
        if (!head || !head->next || k == 0) return head;

        // Step 1: Calculate the length of the list and get the tail node
        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // Step 2: Connect tail to head to form a circular list
        tail->next = head;

        // Step 3: Find effective rotations needed
        k = k % length;
        int stepsToNewTail = length - k;

        // Step 4: Traverse to the new tail node
        ListNode* newTail = tail;
        while (stepsToNewTail > 0) {
            newTail = newTail->next;
            stepsToNewTail--;
        }

        // Step 5: Break the circle and return new head
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};