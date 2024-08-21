/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) { ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
        // ListNode *s=head;
        // ListNode *f=head;
        // while(f->next !=NULL && f !=NULL){
        //     s=s->next;
        //     f=f->next->next;
        //     if(s==f)return true;
        // }
        // return false;
    }
};