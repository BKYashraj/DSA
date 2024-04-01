class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        ListNode* temp = head;
        int cnt = 1;
        // mark 4 points in one loop
        while(temp!=NULL){
            if(cnt == left-1) a = temp;
            if(cnt == left) b = temp;
            if(cnt == right) c = temp;
            if(cnt == right+1) d = temp;
            temp = temp->next;
            cnt++;
        }
        // Then break the ll in 3 parts if possible
        if(a != NULL) a->next = NULL;
        c->next = NULL;
        c = reverse(b); 
        if(a != NULL) a->next = c;
        b->next = d;
        if(a != NULL) return head;
        return c; // if a is NULL then we cannot return head
    }
};
