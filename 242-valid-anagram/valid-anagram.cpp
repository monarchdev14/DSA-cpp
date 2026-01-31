class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2){
            return false;
        }
        int j=0;
        for(int i=0; i<=n1; i++){
            if(j==n2){
                return true;
            }
            if(s[i]==t[j]){
                j++;
            }
        }
        return false;
    }
};