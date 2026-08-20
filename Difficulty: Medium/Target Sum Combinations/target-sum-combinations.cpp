class Solution {
  public:
    void helper(vector<int> &arr, int target, int i, int sum, vector<int> &comb, vector<vector<int>> &ans){
        if(sum==target){
            ans.push_back(comb);
            return;
        }
        if(sum>target){
            return;
        }
        for(int j=i; j<arr.size(); j++){
            comb.push_back(arr[j]);
            helper(arr, target, j, sum+arr[j], comb, ans);
            comb.pop_back();
        }
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(), arr.end());
        vector<int> comb;
        vector<vector<int>> ans;
        helper(arr, target, 0, 0, comb, ans);
        return ans;
    }
};