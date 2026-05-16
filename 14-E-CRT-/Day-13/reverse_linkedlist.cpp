#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp = nullptr;

        while(curr){
            ListNode* fwd = curr->next;
            curr->next = temp;
            temp = curr;
            curr = fwd;
        }

        return temp;
    }
};