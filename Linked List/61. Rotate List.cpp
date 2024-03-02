class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* tail = head;
        int len = 0;
        while(temp != NULL){
            if(temp->next == NULL) tail = temp;
            len++;
            temp=temp->next;
        }
        k = k % len;
        temp = head;
        for(int i=1;i<len-k;i++){ 
            temp = temp->next;
        }       
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
