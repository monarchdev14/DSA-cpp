class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0; 
        int j=height.size()-1;
        int area=0;
        int max_area=0;
        while(i<j){
            area=min(height[i], height[j])*(j-i);
            if(area>max_area){
                max_area=area;
            }
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return max_area;
    }
};