class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] >= nums[lo]){  // check for if present in the left side 
                if(nums[lo] <= target && target <= nums[mid]) hi = mid-1;
                else lo = mid+1; 
            }
            else{  //check for if present in the right side 
                if(target >= nums[mid] && target <= nums[hi]){
                    lo = mid+1;
                }
                else hi = mid-1;
            }  
        }
        return -1;
    }
};
