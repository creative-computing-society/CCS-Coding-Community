// link-https://leetcode.com/problems/linked-list-cycle/description/

// Approach 1- Hash map
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return NULL;
        unordered_map<ListNode*, int> umap;
        ListNode *ptr=head;
        while(ptr){
            if(umap[ptr] != 0) return true;
            umap[ptr] = 1;
            ptr = ptr->next;
        }
        return false;
    }
};

// Approach 2- Floyd's Cycle Finding Algorithm (Slow and fast pointer
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode *slow=head, *fast=head->next;
        while(slow != fast){
            if(!fast || !fast->next) return false;
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }
};