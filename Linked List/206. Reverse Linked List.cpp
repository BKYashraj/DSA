1. Iterative way
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
};

2. Recursive Way
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head==NULL || head->next == NULL) return head;
       ListNode * newll = reverseList(head->next);
       head->next->next = head;
       head->next = NULL; 
       return newll;
    }
};
