class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0; i<nums1.size(); i++){
            bool found=false;
            int nextgE=-1;
            int target=nums1[i];
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j]==target){
                    found=true;
                }
                if(found){
                    if(nums2[j]>target){
                        nextgE=nums2[j];
                        break;
                    }
                }
            }
            result.push_back(nextgE);
        }
        return result;
    }
};