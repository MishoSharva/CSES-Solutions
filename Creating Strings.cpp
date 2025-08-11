#include<bits/stdc++.h>
using namespace std;
string s;
set <string > sp (string s){
	set<string> l;
	if(s.size()==1){
		l.insert(s);
		return l;
	}
	for(int i=0;i<s.size();i++){
		string copy=s;
		copy.erase(copy.begin()+i);
		set <string> s1=sp(copy);
		for (auto t : s1){
			t+=s[i];
			l.insert(t);
		}
	}
	return l;
}
int main(){
	cin>>s;
	set <string> ans=sp(s);
	cout<<ans.size()<<endl;
	for(auto i : ans){
		cout<<i<<endl;
	}
}