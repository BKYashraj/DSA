class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector< vector<int> > t;

        for(int i=0;i<=n;i++){
            vector<int>a(i+1,1);
            t.push_back(a);
            for(int j=1;j<i;j++){
                t[i][j] = t[i-1][j] + t[i-1][j-1];
            }
        }
        return t[n];
    }
};

OR

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector < int > result(rowIndex + 1, 1); // In this direct we put 1 in the specific row

        for (int i = 2; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--) {
                result[j] += result[j - 1];
            }
        }
        return result;
    }
};
