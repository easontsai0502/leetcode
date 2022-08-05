/*
[Q]https://leetcode.com/problems/is-subsequence/
[can't summit]
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
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