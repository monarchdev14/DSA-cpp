class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0; 
        vector<bool> visited(256,false);
        int count=0; 
        int max=0;
        if(s.size()<1){
            return 0;
        }
        while(j<s.size()){
            if(visited[s[j]]==false){
                visited[s[j]]=true;
                count++;
                j++;
                if(count>max){
                    max=count;
                }
            }else{
                visited[s[i]]=false;
                count--;
                i++;
            }
        }
        return max;
    }
};