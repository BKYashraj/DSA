class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len <= 1){
            head = head->next;
            return head;
        }
        int ans = len/2;
        temp = head;
        for(int i=0;i<ans-1;i++){
            temp=temp->next;
        }
        temp->next =temp->next->next;
        return head;
    }
};
