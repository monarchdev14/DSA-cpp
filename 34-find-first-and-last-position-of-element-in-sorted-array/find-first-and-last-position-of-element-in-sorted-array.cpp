class Solution {
public:
    int first_occurence(vector<int> nums, int target){
        int s=0;
        int e=nums.size()-1;
        int first_occurence=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                if(mid>0 && nums[mid-1]==target){
                    e=mid-1;
                }else{
                    first_occurence=mid;
                    break;
                }
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return first_occurence;
    }
    int last_occurence(vector<int> nums, int target){
        int s=0;
        int e=nums.size()-1;
        int last_occurence=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                if(mid<nums.size()-1 && nums[mid+1]==target){
                    s=mid+1;
                }else{
                    last_occurence=mid;
                    break;
                }
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return last_occurence;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first_occurence(nums, target));
        ans.push_back(last_occurence(nums, target));
        return ans;
    }
};