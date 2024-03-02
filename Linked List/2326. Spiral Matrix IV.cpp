Same as spiral matrix 2 only take care of temp == NULL condition 

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        int r1 = 0;
        int r2 = m-1;
        int c1 = 0;
        int c2 = n-1;
        ListNode* temp = head;
        while(r1 <= r2 && c1 <= c2){
            for(int j=c1;j<=c2;j++){
                if(temp == NULL) return ans;
                ans[r1][j] = temp->val;
                temp=temp->next;
            }
            r1++;

            if(r1 > r2 || c1 > c2) break;
           for(int i = r1 ; i<=r2;i++){
               if(temp == NULL) return ans;
                ans[i][c2] = temp->val;
                temp=temp->next;
           }
           c2--;

           if(r1 > r2 || c1 > c2) break;
           for(int j=c2 ; j>=c1;j--){
               if(temp == NULL) return ans;
               ans[r2][j] = temp->val;
               temp=temp->next;
           }
           r2--;

           if(r1 > r2 || c1 > c2) break;
           for(int i=r2;i>=r1;i--){
               if(temp == NULL) return ans;
                ans[i][c1] = temp->val;
                temp=temp->next;
           }
           c1++;
        }
        return ans;
    }
};
