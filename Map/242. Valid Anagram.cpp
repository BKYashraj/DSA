class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map <char,int>map1;
        
        for(int i=0;i<s.size();i++){
            map1[s[i]]++; 
        }
        for(int i=0;i<t.size();i++){
            int ch = t[i];
            if(map1.find(ch)!=map1.end()){
                map1[ch]--;
                if(map1[ch]==0) map1.erase(ch);
            }
            else return false;
        }
        return true;
    }
};
