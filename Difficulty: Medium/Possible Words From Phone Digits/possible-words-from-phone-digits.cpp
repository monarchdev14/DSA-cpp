class Solution {
  public:
    void helper(vector<string> &mp, vector<int> &arr, string &ans, int  i, vector<string> &comb){
        if(i==arr.size()){
            comb.push_back(ans);
            return;
        }
        int digits=arr[i];
        if(digits<2 || digits>9){
            helper(mp, arr, ans, i+1, comb);
            return;
        }
        for(char c=0; c<mp[digits].size(); c++){
            ans.push_back(mp[digits][c]);
            helper(mp, arr, ans, i+1, comb);
            ans.pop_back();
        }
    }
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string> mp={" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string ans;
        vector<string> comb;
        helper(mp, arr, ans, 0, comb);
        return comb;
    }
};