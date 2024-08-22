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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if (!head || left == right) {
            return head;
        }

        ListNode* dummy = new ListNode(0);//handle case left is 1
        dummy->next = head;
        ListNode* prev = dummy;

        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        ListNode* cur = prev->next;

        for (int i = 0; i < right - left; i++) {
            ListNode* temp = cur->next;
            cur->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }
      return dummy->next; 
    } 
//     }Store the next node (temp) of cur to avoid losing the reference.
// Update the cur.next to point to temp.next, effectively reversing the direction.
// Move temp.next to point to prev.next, effectively moving temp to the correct position in the reversed portion.
// Update prev.next to point to temp, making temp the new next node of prev.
// Return the new head of the modified linked list.

// dummy.next points to the head of the modified linked list, 
};