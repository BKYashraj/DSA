class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        ListNode *tempB = headB;

        int len1 = 0;
        while(tempA != NULL){
            len1++;
            tempA = tempA->next;
        }

        int len2 = 0;
        while(tempB != NULL){
            len2++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        if(len2 > len1){
            for(int i=1;i<=len2-len1;i++){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            for(int i=1;i<=len1-len2;i++){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
    }
};
