class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>t;
        for(int i=0;i<arr.size();i++){
            t[arr[i]]++;
        }
        unordered_set<int>r;
        for(auto ele : t){  // for loop on map t
            int freq = ele.second;
            if(r.find(freq)!=r.end()){
                return false;
            }
            else r.insert(freq);
        }
        return true;
    }
};
