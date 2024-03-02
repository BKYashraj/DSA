class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                flag = true;
                break; // most important
            }
        }
        if(flag == false) return NULL;
        else{
            ListNode* temp = head;
            while(temp != slow){
                temp = temp->next;
                slow = slow->next;
            }
            return temp ;
        }
    }
};
