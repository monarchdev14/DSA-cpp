class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int ms=0;
        auto it=max_element(nums.begin(), nums.end());
        int max=*it;
        if(max<0){
            return max;
        }
        for(int i=0; i<nums.size(); i++){
            if(cs+nums[i]>0){
                cs=cs+nums[i];
                if(cs>ms){
                    ms=cs;
                }
            }else{
                cs=0;
                ms=cs+ms;
            }
        }
        return ms;
    }
};