1) Basic Approach
class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        int n = order.size();
        int m = s.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(order[i] == s[j]){
                    ans += s[j];
                    s[j] = '@';
                }
            }
        }

        for(int i=0;i<m;i++){
            if(s[i] != '@'){
                ans += s[i];
            }
        }
        return ans;
    }
};

2) By using Lamda Function
class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mpp;
        for(int i=0;i<order.size();i++){
            mpp[order[i]] = i;
        }

        sort(s.begin(),s.end(),[&](char a, char b){
            return mpp[a] < mpp[b];
        });

        return s;
    }
};
