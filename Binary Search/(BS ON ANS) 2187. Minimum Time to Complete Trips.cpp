class Solution {
public:
    bool check(long long mid,vector<int>& time, int totalTrips){
        long long n = time.size();
        long long count =0;
        for(int i=0;i<n;i++){
            count += mid/time[i];
        }
        if(count >= totalTrips) return true;
        else return false;

    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long n = time.size();
        int mx = 0;
        for(int i=0;i<n;i++){
            mx = max(mx, time[i]); // not use long long with max inbuild function
        }
        long long lo = 1;
        long long hi = (long long) mx * (long long) totalTrips;
        long long ans = -1;
        while(lo <= hi){
            long long mid = lo + (hi-lo)/2;
            if(check(mid,time,totalTrips)){
                ans = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return ans;
    }
};
