class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>a1(26,0),a2(26,0),a3(26,0),a4(26,0);
        for(auto x : word1){
            a1[x-'a']++;
            a2[x-'a'] = 1;
        }
         for(auto x : word2){
            a3[x-'a']++;
            a4[x-'a'] = 1;
        }
        sort(a1.begin(),a1.end());
        sort(a3.begin(),a3.end());
        return (a1 == a3 && a2==a4);
    }
};
