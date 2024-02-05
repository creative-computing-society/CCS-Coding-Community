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
    ListNode* middleNode(ListNode* head) {
        //1st approach -- finding len and then the mid 

        // ListNode * temp=head;
        // int len=0;
        // while(temp!=NULL){
        //     temp=temp->next;
        //     len++;

        // }
        // len=len/2;
        // temp=head;
        // for(int i=0;i<len;i++){
        //     temp=temp->next;
        // }

        // return temp;

        //fast->2x  slow-

        ListNode * slow=head;
        ListNode * fast=head;

    // fast - NULL ..... 
        while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
        }

        return slow;
    }
};
