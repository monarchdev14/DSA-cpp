class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0; 
        int j=nums.size()-1;
        int ans =-1;
        while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==target){
                ans=m;
                break;
            }else if(nums[m]>target){
                j=m-1;
            }else{
                i=m+1;
            }
        }
        return ans;
    }
};