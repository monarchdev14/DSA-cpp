class Solution {
public:
int repeating(vector<int> &arr){
    int repeat;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]-arr[i-1]==0){
            repeat=arr[i];
        }
    }
    return repeat;
}
int missing(vector<int> &arr){
    sort(arr.begin(), arr.end());
    int diff;
    int missing;
    if(arr[0]!=1){
        missing=1;
        return missing;
    }
    for(int i=1; i<arr.size(); i++){
        diff=arr[i]-arr[i-1];
        if(diff>1){
            missing=arr[i]-1;
            return missing;
        }
    }
    missing=arr.back()+1;
    return missing;
}
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        vector<int> result;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                arr.push_back(grid[i][j]);
            }
        }
        int miss=missing(arr);
        int repeat=repeating(arr);
        result.push_back(repeat);
        result.push_back(miss);
        return result;
    }
};