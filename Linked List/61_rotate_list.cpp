class Solution {
  public:
  ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next) return head;
        ListNode *ptr = head; // list iterator
        int size = 1; // to store the size( to be initialised at 1)

        while(ptr->next){
            size++;
            ptr = ptr->next;
        }

        ptr->next = head;
        k = k%size;

        while(size-k>0){
            ptr = ptr->next;
            size--;
        }

        ListNode* newHead = ptr->next;
        ptr->next = NULL;

        return newHead;
    }
};