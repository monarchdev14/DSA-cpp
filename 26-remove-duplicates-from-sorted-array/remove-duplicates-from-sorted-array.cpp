class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0; 
        int j=0;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
                j++;
            }else{
                j++;
            }
        }
        int count=0;
        while(i>=0){
            count++;
            i--;
        }
        return count;
    }
};