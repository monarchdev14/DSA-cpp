class Solution {
public:
    int helper(vector<int> &nums, int target, int s, int e){
        int mid=s+(e-s)/2;
        int ans;
        if(s>e){
            return s;
        }
        if(nums[mid]==target){
            ans = mid;
        }else if(nums[mid]>target){
            return helper(nums, target, s, mid-1);
        }else{
            return helper(nums, target, mid+1, e);
        }
        return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
        int ans=helper(nums, target, 0, nums.size()-1);
        return ans;
    }
};