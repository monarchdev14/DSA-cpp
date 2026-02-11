class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int> s;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C"){
                if(!s.empty()){
                    s.pop();
                }
            }else if(operations[i]=="D"){
                if(!s.empty()){
                    int prev=s.top();
                    s.push(2*(prev));
                }
            }else if(operations[i]=="+"){
                if(s.size()>=2){
                    int first=s.top();
                    s.pop();
                    int second=s.top();
                    s.push(first);
                    s.push(first+second);
                }
            }else{
                s.push(stoi(operations[i]));
            }
        }
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};