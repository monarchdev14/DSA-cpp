class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sol;
        for(int i=0; i<nums.size(); i++){
            sol.push_back(nums[i]*nums[i]);
        }
        sort(sol.begin(), sol.end());
        return sol;
    }

};