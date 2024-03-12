class Solution {
public:
    ListNode* mergeSort(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;

        while(a != NULL && b != NULL){
           if(a->val <= b->val){
            tempC->next = a;
            a = a->next;
            tempC = tempC->next;
           }
           else{
            tempC->next = b;
            b = b->next;
            tempC = tempC->next;
           }
        }
        if(a == NULL) tempC -> next = b;
        else tempC -> next = a;

        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
      
        //Recursion
        a = sortList(a);
        b = sortList(b);

        // Merge Sort
        ListNode*c = mergeSort(a,b);
        return c;
    }
};
