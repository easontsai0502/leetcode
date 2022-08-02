class Solution {
	public:
		bool isSubsequence(string s, string t) {
			/*
			[Q]https://leetcode.com/problems/is-subsequence/
			*/
			using namespace std;
			cin>>s>>t;
			int j=0;
			string ans="false";
			for(int i=0;i<t.size();i++){
				if(j==s.size()){
					ans="true";
					break;
				}
				if(t[i]==s[j]){
					j++;
				}
			}
			cout<<ans;
			return true;

		}
};