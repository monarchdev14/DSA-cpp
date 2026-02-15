class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st;
        int j=0;
        if(s.size()>t.size()){
            return false;
        }
        if(t.size()<2){
            if(s[0]!=t[0]){
                return false;
            }else{
                return true;
            }
        }
        for(int i=0; i<t.size(); i++){
            if(t[i]==s[j]){
                st.push(t[i]);
                j++;
            }
        }
        int k=s.size()-1;
        if(st.size()<s.size()){
            return false;
        }
        while(!st.empty()){
            if(st.top()!=s[k]){
                return false;
            }
            st.pop();
            k--;
        }
        return true;
    }
};