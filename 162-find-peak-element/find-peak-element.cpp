class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n>1){
            if(nums[0]>nums[1]){
                return 0;
            }
            if(nums[n-1]>nums[n-2]){
                return n-1;
            }
            int s=1; 
            int e=n-2;
            int ans;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    ans=mid;
                    break;
                }else if(nums[mid-1]>nums[mid]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }
            return ans;
        }else{
            return 0;
        }
    }
};