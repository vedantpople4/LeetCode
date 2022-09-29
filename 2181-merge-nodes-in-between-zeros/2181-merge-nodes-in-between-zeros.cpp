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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head;
        while(temp!=NULL){
            int sum = 0;
            ListNode *newnode = temp;
            while(newnode!=NULL && newnode->val!=0){
                sum += newnode->val;
                newnode = newnode->next;
            }
            temp->next = newnode->next;
            temp->val = sum;
            temp = temp->next;
        }
        return head->next;
    }
};