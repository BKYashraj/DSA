class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr = 0, minc = 0;
        int maxr = n-1, maxc = n-1;
        vector<vector<int>>matrix(n,vector<int>(n));
        
        int value = 1; // This value is 1 because we have to create the matrix of 1,2,3,4,5,6,7,8,9 ....
        
        while(minr<=maxr && minc<=maxc){
            for(int j = minc;j<=maxc;j++){
                matrix[minr][j] = value++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                matrix[i][maxc] = value++;
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                matrix[maxr][j] = value++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                matrix[i][minc] = value++;
            }
            minc++;
        }
        return matrix;
    }
};
