class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
-------------------OR----------------------
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp= temp->next;
        }
        int target = len/2;
        temp = head;
        for(int i=0;i<target;i++){
            temp=temp->next;
        }
        return temp;
    }
};
