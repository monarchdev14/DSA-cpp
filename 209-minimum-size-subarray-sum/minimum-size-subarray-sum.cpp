class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n=nums.size();
        int left=0;
        int sum=0;
        int min_len=INT_MAX;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            while(sum>=target){
                min_len=min(min_len, i-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
        
    }
};