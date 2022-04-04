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
    int findLength(ListNode *head){
        int len = 0;
        while(head){
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int len = findLength(head);
        ListNode *beg = head;
        for(int i=0;i<k-1;i++) beg = beg->next;
        ListNode *end = head;
        for(int i=0;i<len-k;i++) end = end->next;
        swap(end->val , beg->val);
        return head;
    }
};

