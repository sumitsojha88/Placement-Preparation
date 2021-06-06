
Idea:-
  
For the 1st operation, we can simply do s += s to append the whole string to the end.
then we make two different string with the same length by 01 and 10 alternative. for example: s = 11100
s = 1110011100
s1= 1010101010
s2= 0101010101
finally, use sliding window（size n）to compare s to both s1 and s2.
why we can double s to fullfil the first operation, let's look at the same example s = 11100:`
double s: 1110011100
size n window: |11100|11100 ==> 1|11001|1100 ==> 11|10011|100 and so on, when we move one step of the sliding window, it is the same to append 1 more element from beginning.
  
Time complexity
Time O(N)
Space O(N)
  
  
Code in cpp:-
  
class Solution {
public:
    int minFlips(string s) {
            
            int n=s.size();
            s += s;                // adding whole string
            int m=s.size();
            string t="";
            string tt="";
            for(int i=0;i<m;i++)
            {
                if(i%2==0)
                {
                         t += '0';
                        tt += '1';
                }
                    else
                    {
                          tt += '0';
                           t += '1';  
                    }
            }
            int ct=0;
            int ctt=0;  
            int ans=INT_MAX;
            for(int i=0;i<m;i++)
            {
                if(s[i]!=t[i])
                        ct++;
                if(s[i]!=tt[i])
                        ctt++;  
                    
                 if(i>=n)
                 {
                      if(s[i-n]!=t[i-n]) ct--;
                      if(s[i-n]!=tt[i-n]) ctt--;
                         
                 }
                  
                    
                if(i>=n-1)
                {
                     ans = min({ct,ctt,ans}) ;  
                }
                
            }       
        
            return ans;
      
    }
};
