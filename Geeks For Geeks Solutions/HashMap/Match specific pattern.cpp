

#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
string encode(string str)
{
    unordered_map<char,int> mp;
    string res="";
    int i=0;
    for(char ch : str)
    {
        if(mp.find(ch)==mp.end())
        mp[ch] = i++;
        
        res += to_string(mp[ch]);
    }
    
    
    return res;
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    int len = pattern.size();
     string hash = encode(pattern);
     vector<string> ans;
     for(string word: dict)
     {
         if(word.size()==pattern.size() && encode(word)==hash)
         ans.push_back(word);
     }
     
     
     return ans;
}
