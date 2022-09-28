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
        if(head->next==NULL) return NULL;
        int count = 0;
        ListNode *temp = head;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        if(count==n) return head->next;
        n = count-n;
        temp = head;
        n-=1;
        while(n-- && temp->next!=NULL){
            temp = temp->next;
        }
        //cout<<temp->val;
        temp->next = temp->next->next;
        return head;
    }
};