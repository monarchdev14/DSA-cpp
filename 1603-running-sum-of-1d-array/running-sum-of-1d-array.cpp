class Solution {
public:
    void helper(vector<int> &nums, int i, int cs, vector<int> &result){
        if(i>nums.size()-1){
            return;
        }
        cs=nums[i]+cs;
        result.push_back(cs);
        helper(nums, i+1, cs, result);
    }
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        helper(nums, 0, 0, result);
        return result;
    }
};