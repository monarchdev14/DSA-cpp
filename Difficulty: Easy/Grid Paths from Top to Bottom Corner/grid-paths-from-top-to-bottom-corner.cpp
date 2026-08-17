class Solution {
  public:
    void helper(vector<vector<int>> &mat, int n, int m, int i, int j, vector<vector<int>> &ans, vector<int> &paths){
        paths.push_back(mat[i][j]);
        if(i==n-1 && j==m-1){
            ans.push_back(paths);
            paths.pop_back();
            return;
        }
        if(j<m-1){
            helper(mat, n, m, i, j+1, ans, paths);
        }
        if(i<n-1){
            helper(mat, n, m, i+1, j, ans, paths);
        }
        paths.pop_back();
        
    }
    vector<vector<int>> allPaths(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<int> paths;
        vector<vector<int>> ans;
        helper(mat, n, m, 0, 0, ans, paths);
        return ans;
    }
};