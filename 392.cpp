/*
[Q]https://leetcode.com/problems/is-subsequence/
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s,t;
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
	return 0;
}