#include <bits/stdc++.h>
using namespace std;
string s,ans,answer,rev;
int fix[26];
int main (){
	cin>>s;
	for(int i=0;i<s.length();i++){
		fix[s[i]-'A']++;
	}
	for(int i=0;i<26;i++){
		while(fix[i]>1){
			ans+='A'+i;
			fix[i]-=2;
		}
	}
	rev=ans;
	reverse(rev.begin(),rev.end());
	for(int i=0;i<26;i++){
		while(fix[i]==1){
			answer=ans+ (char) ('A'+i) + rev;
			break;
		}
	}
	if(answer==""){
		answer=ans+rev;
	}
	if(answer.length()==s.length()){
		cout<<answer<<endl;
	}else{
		cout<<"NO SOLUTION"<<endl;
	}
}