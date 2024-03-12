class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum +=apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        int m = capacity.size();
        int max = 0;
        int count = 0;
        for(int i=0;i<m;i++){
            if(sum > max){
                max +=capacity[i];
                count++;
            }
        }
        return count;
    }
};
