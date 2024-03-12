A-1)// It takes more time complexity O(n * K^2)
  This is very simple question use logic of Leetcode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                temp = temp->next;
                a = a->next;
            }
            else{
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
        }
        if(a == NULL) temp->next = b;
        else temp->next = a;
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* last = lists[lists.size()-1];
            lists.pop_back();
            ListNode* second_last = lists[lists.size()-1];
            lists.pop_back();
            ListNode* ans = merge(last, second_last);
            lists.push_back(ans);
        }
        return lists[0];
    }
};

A-2) It is Better Solution  T.C = O(n * k * log k)
class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                temp = temp->next;
                a = a->next;
            }
            else{
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
        }
        if(a == NULL) temp->next = b;
        else temp->next = a;
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a = lists.front(); // lists[0]
            lists.erase(lists.begin());
            ListNode* b = lists[0]; // lists.front();
            lists.erase(lists.begin()); 
            // Erase function required iterator not works on actual value.
            // Therefore it not works when we use lists.front().
            
            ListNode* ans = merge(a,b);
            lists.push_back(ans);
        }
        return lists[0];
    }
};
