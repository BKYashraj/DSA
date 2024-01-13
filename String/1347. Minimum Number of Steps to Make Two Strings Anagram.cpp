class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int>count;
        for(auto x : s) count[x]++;
        for(auto x : t) count[x]--;
        int ans = 0;
        for(auto x : count) ans += abs(x.second);
        return ans/2;
    }
};
