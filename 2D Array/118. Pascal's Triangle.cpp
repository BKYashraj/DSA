class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector< vector<int> > v;
        for(int i=0;i<n;i++){
            vector < int > a(i+1);
            v.push_back(a); // here we push 'a' array to 2D array v
            // at first array 'a' have size 1 and gradually it incrases
            for(int j=0 ; j<=i ; j++){ 
                if( j==0 || i==j){
                    v[i][j] = 1;
                }
                else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
            }
        }
        return v;
    }
};
