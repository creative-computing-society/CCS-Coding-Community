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
    ListNode* partition(ListNode* head, int x) {
        ListNode* a = new ListNode(0), *b = new ListNode(0);
        ListNode *a1 = a, *b1 = b;

        while(head){
            if(head->val<x){
                a1 = a1->next = head;
            }
            else{
                b1 = b1->next = head;
            }
            head = head->next;
        }
        b1->next = NULL;
        a1->next = b->next;
        return a->next;
    }
};