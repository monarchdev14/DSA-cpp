class Solution {
public:
    bool isPalindrome(string s) {
       vector<int> sol;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n=s.size();
        int i=0;
        while(i<n){
            if(isalnum(s[i])){
                sol.push_back(s[i]);
            }
            i++;
        }
        int j=0;
        int k=sol.size()-1;
        while(j<=k){
            if(sol[j]!=sol[k]){
                return false;
            }
            j++;
            k--;
        }
        return true;
    }
};