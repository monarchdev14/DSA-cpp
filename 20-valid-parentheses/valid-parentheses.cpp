class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==1){
            return false;
        }
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            char temp=s[i];
            if(temp==')' || temp=='}' || temp==']'){
                if(st.empty()){
                    return false;
                }
                if(temp==')' && st.top()=='(' || temp=='}' && st.top()=='{' || temp==']' && st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(temp);
            }
        }
        return st.empty(); 
    }
};