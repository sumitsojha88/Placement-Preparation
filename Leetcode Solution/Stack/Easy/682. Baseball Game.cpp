

Question link: https://leetcode.com/problems/baseball-game/



class Solution {
public:
    int calPoints(vector<string>& ops) {
            
            
            int n=ops.size();
        int ans=0;
        stack<int>s;
        for(int i=0;i<n;i++) {
            if(ops[i]=="+") {
                int x=s.top();
                s.pop();
                int y=s.top();
                s.push(x);
                    
                s.push(x+y);
                ans+=s.top();
            }
            else if(ops[i]=="D") {
                s.push(2*s.top());
                ans+=s.top();
            }
            else if(ops[i]=="C") {
                ans-=s.top();
                s.pop();
            }
            else {
                s.push(stoi(ops[i]));
                ans+=s.top();
            }
        }
        return ans;
        
    }
};
