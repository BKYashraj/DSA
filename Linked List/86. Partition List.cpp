By using 2 ferzi nodes
Similar Question = 328. Odd Even Linked List
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* Low = new ListNode(100);
        ListNode* High = new ListNode(100);
        ListNode* tempLow = Low;
        ListNode* tempHigh = High;
        while(head != NULL){
            if(head->val < x){
                tempLow->next = head;
                tempLow = tempLow->next;
                head = head->next;
            }
            else{
                tempHigh->next = head;
                tempHigh = tempHigh->next;
                head = head->next;
            }   
        }
        tempLow->next = High->next;
        tempHigh->next = NULL;
        return Low->next;
    }
};
