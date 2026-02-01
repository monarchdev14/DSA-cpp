class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        sort(numbers.begin(), numbers.end());
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                break;
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        sol.push_back(i+1);
        sol.push_back(j+1);
        return sol;
    }
};