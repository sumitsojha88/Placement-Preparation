Link-https://www.interviewbit.com/problems/next-similar-number/
#define	all(x)	x.begin(),x.end()
#define	rall(x)	x.rbegin(),x.rend()

string Solution::solve(string s) {
	string s2 = s;
	sort(rall(s2));
	if(s==s2)	return "-1";
	
	int n = s.size();

	for(int i=n-1; i>0; i--)	{
		if(s[i-1]<s[i])	{
			string s3 = s.substr(0, i);
			string s4 = s.substr(i);
			sort(all(s4));
			string s5 = s3+s4;
			
			for(int j=i; j<n; j++)	{
				if(s5[i-1]<s5[j])	{
				    
					swap(s5[i-1], s5[j]);
                    return s5;
				}
			}
		}
	}
}
