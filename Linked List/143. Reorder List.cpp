class Solution {
public:
    ListNode* reverse(ListNode* head) {
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
    void reorderList(ListNode* head) {
        // Find Left Middle
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is at left middle
        ListNode* b = reverse(slow->next);
        ListNode* a = head;
        slow->next = NULL; // for break the 2 LL
        // Use partition LL Concept below
        ListNode* tempA = a;
        ListNode* tempB = b;
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        while(tempA && tempB){ // tempA != NULL && tempB != NULL
            tempC -> next = tempA;
            tempA = tempA->next;
            tempC = tempC ->next;

            tempC -> next = tempB;
            tempB = tempB->next;
            tempC = tempC ->next;
        }
        tempC->next = tempA;
        head = c->next;
    }
};
