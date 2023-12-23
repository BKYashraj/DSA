class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> r(150,500); 150 is size and 500 set to every index
        if(s.length() != t.length()) return false;
        for(int i=0;i<s.size();i++)
        {
            int idx = int(s[i]);
            if(r[idx]==500) r[idx]= s[i]-t[i];
            else if(r[idx]!=(s[i]-t[i]))return false;
        }

        for(int i=0;i<r.size();i++){
            r[i] = 500;
        }
      
        for(int i=0;i<s.size();i++)
        {
            int idx = int(t[i]);
            if(r[idx]==500) r[idx]= t[i]-s[i];
            else if(r[idx]!=(t[i]-s[i])) return false;
        }
        return true;
    }
};
