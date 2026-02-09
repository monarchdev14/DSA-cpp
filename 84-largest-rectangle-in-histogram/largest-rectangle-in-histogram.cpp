class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        vector<int> left(heights.size(), 0);
        vector<int> right(heights.size(), 0);
        int max_area=heights[0];
        int area=0;
        for(int i=0; i<heights.size(); i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty()){
                left[i]=-1;
            }else{
                left[i]=s.top();
            }
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=heights.size()-1; i>=0; i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty()){
                right[i]=heights.size();
            }else{
                right[i]=s.top();
            }
            s.push(i);
        }
        for(int i=0; i<heights.size(); i++){
            area=heights[i]*(right[i]-left[i]-1);
            if(area>max_area){
                max_area=area;
            }
        }
        return max_area;
    }
};