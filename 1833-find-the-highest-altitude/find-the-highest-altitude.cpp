class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> helper;
        int st=0;
        for(int i=0; i<gain.size(); i++){
            st+=gain[i];
            helper.push_back(st);
        }
        auto it=max_element(helper.begin(), helper.end());
        int max=*it;
        if(max<0){
            return 0;
        }else{
            return max;
        }
    }
};