class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 0;
        int hi = num;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            long long y = (long long)mid;
            if(y*y == num) return true;
            else if(y*y > num) hi = mid-1;
            else lo = mid+1;
        }
        return false;
    }
};
