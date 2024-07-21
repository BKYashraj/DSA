class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};

-----------OR------------
  
class Solution {
public:
    int countbit(int i){
        int count = 0;
        while(i != 0){
            i = i & (i-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int ans1 = countbit(i);
            ans.push_back(ans1);
        }
        return ans;
    }
};
