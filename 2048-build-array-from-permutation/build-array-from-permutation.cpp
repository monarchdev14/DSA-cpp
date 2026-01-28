class Solution {
public:
    void helper(vector<int> &nums, int i, vector<int> &result){
        if(i==nums.size()-1){
            result.push_back(nums[nums[i]]);
            return;
        }
        helper(nums, i+1, result);
        result.push_back(nums[nums[i]]);
    }
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        helper(nums, 0, result);
        reverse(result.begin(), result.end());
        return result;
    }
};