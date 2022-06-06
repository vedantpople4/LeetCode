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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA, *b = headB;
        int counta = 0, countb = 0;
        for(ListNode *curr = headA; curr!=NULL; curr = curr->next) counta++;
        for(ListNode *curr = headB; curr!=NULL; curr = curr->next) countb++;
        while(counta > countb){
            counta--;
            a = a->next;
        }
        while(countb > counta){
            countb--;
            b = b->next;
        }
        while(a!=b){
            a = a->next;
            b = b->next;
        }
        return a;
    }
};