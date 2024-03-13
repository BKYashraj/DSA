class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* a = new ListNode(100);
        ListNode* b = new ListNode(200);
        ListNode* atemp = a;
        ListNode* btemp = b;
        while(head!=NULL){
            atemp->next = head;
            atemp=atemp->next;
            head=head->next;
            btemp->next = head;
            if(head!=NULL){
                head=head->next;
                btemp=btemp->next;
            }
        }
        atemp->next = b->next;
        btemp->next = NULL;
        return a->next;
    }
};
