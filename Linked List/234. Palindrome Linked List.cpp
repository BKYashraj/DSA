1. by using best way T.C. = O(n) 
  
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is at left middle
        ListNode* newll = reverse(slow->next);
        ListNode* a = head;
        ListNode* b = newll;
        while(b){
            if(a->val != b->val) return false;
            else{
                a=a->next;
                b=b->next;
            }
        }
        return true;
    }
};

2. By using vector

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listVals;
        while (head) {
            listVals.push_back(head->val);
            head = head->next;
        }
        
        int left = 0, right = listVals.size() - 1;
        while(left <= right){
            if(listVals[left]==listVals[right]){
                left++;
                right--;
            }
            else return false;
        }
        return true;
    }
};
