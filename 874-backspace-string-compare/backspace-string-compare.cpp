class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S;
        vector<char> v1;
        vector<char> v2;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                if(!S.empty()){
                    S.pop();
                }
            }else{
                S.push(s[i]);
            }
        }
        while(!S.empty()){
            v1.push_back(S.top());
            S.pop();
        }
        for(int i=0; i<t.size(); i++){
            if(t[i]=='#'){
                if(!S.empty()){
                    S.pop();
                }
            }else{
                S.push(t[i]);
            }
        }
        while(!S.empty()){
            v2.push_back(S.top());
            S.pop();
        }
        if(v1.size()!=v2.size()){
            return false;
        }
        for(int i=0; i<v1.size(); i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};