class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]!=0){
            return 0;
        }
        if(nums[nums.size()-1]!=nums.size()){
            return nums.size();
        }
        int temp;
        for(int i=0; i<nums.size(); i++){
            temp=i;
            if(temp!=nums[i]){
                break;
            }
        }
        return temp;
    }
};