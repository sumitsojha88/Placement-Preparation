
Questionlink: https://leetcode.com/problems/crawler-log-folder/



class Solution {
public:
    int minOperations(vector<string>& logs) {
            
            
            stack<string> st;
           // string t = "../";
            for(int i=0;i<logs.size();i++)
            {
                 if(logs[i]=="../" )
                 {
                         if(!st.empty())
                         st.pop();
                 }
                    else if(logs[i]=="./")
                    {
                            continue;
                    }
                    else
                    {
                            st.push(logs[i]);
                    }
            }
            
            
            return st.size();
        
    }
};
