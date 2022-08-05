/*
[Q]https://leetcode.com/problems/is-subsequence/
[AC]
*/
class Solution {
	public:
		bool isSubsequence(string s, string t) {
			using namespace std;
			{
				int j=0;
				string ans="true";
				bool bo=true;
				for(int i=0;i<t.size();i++){
					if(t[i]==s[j]){
						j++;
					}
					if(j==s.size()){
						ans="true";
						bo=true;
						break;
					}
				}
				if(j!=s.size()){
					ans="false";
					bo=false;
				}
				cout<<ans;
				return bo;
			}
		}
};