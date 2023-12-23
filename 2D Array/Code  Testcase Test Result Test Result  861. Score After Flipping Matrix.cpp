class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // Step 1 : Find the 0 value in 1st column and reverse all the values of that row.
        for(int i=0;i<m;i++){
            if(grid[i][0] == 0){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
      
        //check column wise
        Step 2 : Find the noz and noo in each column
        Step 3 : If noz is greater than noo then reverse the values of that row
        for(int j=0;j<n;j++){
            int noz=0;
            int noo=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo){
                for(int i=0;i<m;i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        
        //calculate count of decimal
        
        int sum=0;
        for(int i=0;i<m;i++){
            int x=1;
            for(int j=n-1;j>=0;j--){
                    sum = sum+grid[i][j]*x;
                    x = x*2;
            }
        }
        return sum;
    }
};
