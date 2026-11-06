class Solution {
private:
    void solve(ListNode* head, ListNode* &newhead) {
        if (!head || !head->next) {
            newhead = head;
            return;
        }

        ListNode* curr = head;
        ListNode* forward = head->next;
        ListNode* nextnode = forward->next;

        newhead = forward;

        ListNode* nextSwappedHead = nextnode; 
        solve(nextnode, nextSwappedHead);

        curr->next = nextSwappedHead;
        forward->next = curr;
    }

public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* newhead = head;
        solve(head, newhead);
        return newhead;
    }
};