------------------------LOGIC 1-------------------------------------
class Solution {
public:
    bool weightShipped(vector<int>& weights,int mid,int days){
        int n = weights.size();
        int m = mid;
        int count = 1;
        int sum = 0;
        for(int i=0;i<n;i++){
            if(sum + weights[i] <= m){
                sum += weights[i];
            }
            else{
                count++;
                sum = weights[i];
            }
        }
        if(count > days) return false;
        else return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int max = INT_MIN;
        int sum = 0;
        //To find max
        // find sum of all weights for high
        for(int i=0;i<n;i++){
            if(weights[i]>max){
                max = weights[i];
            }
            sum += weights[i];
        }
        // Binary search started
        int lo = max;
        int hi = sum;
        int minCapacity = sum;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(weightShipped(weights,mid,days)){
                minCapacity = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return minCapacity;
    }
};

---------------------------LOGIC 2---------------------------------
class Solution {
public:
    bool weightShipped(vector<int>& weights,int mid,int days){
        int n = weights.size();
        int m = mid;
        int count = 1;
        for(int i=0;i<n;i++){
            if(m >= weights[i]){
                m -= weights[i];
            }
            else{
                count++;
                m = mid;
                m -= weights[i];
            }
        }
        if(count > days) return false;
        else return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int max = INT_MIN;
        int sum = 0;
        //To find max
        // find sum of all weights for high
        for(int i=0;i<n;i++){
            if(weights[i]>max){
                max = weights[i];
            }
            sum += weights[i];
        }
        // Binary search started
        int lo = max;
        int hi = sum;
        int minCapacity = sum;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(weightShipped(weights,mid,days)){
                minCapacity = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return minCapacity;
    }
};
