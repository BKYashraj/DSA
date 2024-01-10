class Solution {
public:
    int arrangeCoins(int n) {
        long long lo = 1;
        long long hi = n;
        while(lo <= hi){
            long long mid = lo + (hi-lo)/2;
            long long x = mid * (mid+1)/2;
            if(n == x) return mid;
            else if(x > n) hi = mid -1;
            else lo = mid +1;
        }
        return hi;
    }
};
