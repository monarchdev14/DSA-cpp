class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum=0;
        for(int i=0; i<nums.size(); i++){
            total_sum+=nums[i];
        }
        int left_sum=0;
        for(int i=0; i<nums.size(); i++){
            if(total_sum-left_sum-nums[i]==left_sum){
                return i;
            }
            left_sum=nums[i]+left_sum;
        }
        return -1;
    }
};