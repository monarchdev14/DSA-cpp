class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> sol;
        int count=1;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                count++;
            }else{
                if(count>n/3){
                    sol.push_back(nums[i-1]);
                }
                count=1;
            }
        }
        if(count>n/3){
            sol.push_back(nums[n-1]);
        }
        return sol;
    }
};