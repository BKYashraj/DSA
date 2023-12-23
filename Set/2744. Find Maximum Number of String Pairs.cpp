class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set <string> a;
        for(int i=0;i<n;i++){
            a.insert(words[i]);
        }
        int count =0;
        for(int i=0;i<n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]==rev) continue;
            if(a.find(rev)!=a.end()){
                a.erase(words[i]);
                count++;
            }
        }
        return count;
    }
};

OR

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count =0;
        unordered_set <string> a;
        for(int i=0;i<n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(a.find(rev)!=a.end()) count++;
            else a.insert(words[i]);
        }
        return count;
    }
};
