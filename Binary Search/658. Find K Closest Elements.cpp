class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>ans(k);
        //Case 1 : for ex.2 element is out fo bound fron left
        if(x < arr[0]){
            for(int i=0;i<k;i++){
                ans[i] = arr[i];
            }
            return ans;
        }
        // Case 2 : from right nsert elements
        if(x > arr[n-1]){
            int i = n-1;
            int j = k-1;
            while(j>=0){
                ans[j] = arr[i];
                i--;
                j--;
            }
            return ans;
        }
        // Case 3 binary search normal 
        int lo = 0;
        int hi = n-1;
        int mid = -1;
        int flag = false;
        int t =0;
        while(lo <= hi){
            mid = lo + (hi-lo)/2;
            if(arr[mid] == x){
                flag = true;
                ans[t] = arr[mid];
                t++;
                break;
            } 
            else if(arr[mid] < x) lo = mid+1;
            else hi = mid-1;
        }
        // if element is not present then  this condition exist
        int lb = hi;
        int ub = lo;
        if(flag == true){
            //but when element exist then condition is difference
            lb = mid-1;
            ub = mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1 = abs(x - arr[lb]);
            int d2 = abs(x - arr[ub]);
            if(d1 <= d2){
                ans[t] = arr[lb];
                lb--;
            }
            else{
                ans[t] = arr[ub];
                ub++;
            }
            t++;
        }
        if(lb<0){
            while(t<k){
                ans[t] = arr[ub];
                ub++;
                t++;
            }
        }
        if(ub>n-1){
            while(t<k){
                ans[t] = arr[lb];
                lb--;
                t++;
            }
        }
        sort(ans.begin(),ans.end());                                                                                                                                                                                
        return ans;
    }   
};
