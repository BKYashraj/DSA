class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum = 0;
        long long count = 1;
        long long n = happiness.size();
        for(int i=0;i<k;i++){
            long long ans = 0;
            if(sum == 0){
                sum +=happiness[i];
            }
            else{
                ans = happiness[i] - count;
                count++;
                if(ans >= 0) sum += ans;
                else sum += 0;
            }
        }
        return sum;
    }
};
