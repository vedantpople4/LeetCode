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
    int pairSum(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *prev = NULL;
        ListNode *curr = slow;
        while(curr){
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp; 
        }
        int res = 0;
        ListNode *headtemp = head;
        while(prev){
            res = max(res , prev->val+headtemp->val);
            prev = prev->next;
            headtemp = headtemp->next;
        }
        return res;
    }
};