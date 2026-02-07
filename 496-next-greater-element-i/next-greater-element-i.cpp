class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> mp;
        stack<int> s;
        for(int i=0; i<nums2.size(); i++){
            while(!s.empty() && nums2[i]>s.top()){
                mp[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        while(!s.empty()){
            mp[s.top()]=-1;
            s.pop();
        }
        for(int j=0; j<nums1.size(); j++){
            result.push_back(mp[nums1[j]]);
        }
        return result;
    }
};