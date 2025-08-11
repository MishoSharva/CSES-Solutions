#include<bits/stdc++.h>
#pragma GCC diagnostic warning "-std=c++11"
using namespace std;
vector <string> solve (int n){
	vector <string> ans;
	if(n==1){
		ans.push_back("0");
		ans.push_back("1");
	}else{
		vector <string> c=solve(n-1);
		for(int i=0;i<c.size();i++){
			c[i]+="0";
			ans.push_back(c[i]);
		}
		vector <string> c2=solve(n-1);
		reverse(c2.begin(),c2.end());
		for(int i=0;i<c2.size();i++){
			c2[i]+="1";
			ans.push_back(c2[i]);
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<string> ans=solve(n);
	for(auto j : ans){
		cout<<j<<endl;
	}
}