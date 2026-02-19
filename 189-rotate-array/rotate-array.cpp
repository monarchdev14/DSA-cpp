class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> res;
        for(int m=n-k; m<n; m++){
            res.push_back(nums[m]);
        }
        for(int i=0; i<n-k; i++){
            res.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]=res[i];
        }
    }
};