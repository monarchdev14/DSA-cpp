class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
            if(i==n-1){
                return;
            }
        }
        int i=j;
        while(j<n){
            if(nums[j]==0){
                j++;
            }else{
                swap(nums[j], nums[i]);
                i++;
            }
        }
        return;
    }
};