class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1 = haystack.size();
        int s2 = needle.size();
        for(int i=0;i<s1;i++){
            string sub = haystack.substr(i,s2);
            if(sub == needle) return i;
        }
        return -1;
    }
};
