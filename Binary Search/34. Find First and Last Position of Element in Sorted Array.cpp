class Solution {
public:
        int first_oc(vector<int>& nums, int target){
            int n = nums.size();
            int lo = 0;
            int hi = n-1;
            int flag = false;
            int ans = -1;
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid] == target){
                    if(mid == 0 || nums[mid-1] != target){
                        ans = mid;
                        flag = true;
                        break;
                    }
                    else hi = mid - 1;
                }
                else if(nums[mid] < target) lo = mid+1;
                else hi = mid-1; 
            }
            if(flag == false){
                return -1;
            }
            else return ans;
        }

        int last_oc(vector<int>& nums, int target){
            int n = nums.size();
            int lo = 0;
            int hi = n-1;
            int flag = false;
            int ans = -1;
            while(lo <= hi){
                int mid = lo + (hi - lo) / 2;
                if(nums[mid] == target){
                    if(mid == n-1 || nums[mid+1] != target){
                        ans = mid;
                        flag = true;
                        break;
                    }
                    else lo = mid + 1;
                }                
                else if(nums[mid] < target) lo = mid+1;
                else hi = mid-1; 
            }
            if(flag == false){
                return -1;
            }
            else return ans;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = first_oc(nums, target);
        int last = last_oc(nums, target);
        return {first,last};
    }
};
