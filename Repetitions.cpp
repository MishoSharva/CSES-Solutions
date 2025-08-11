#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
int n, a[N];
 
int main(){
	string s;
	cin>>s;
	n=s.size();
	int cnt=1,cntmax=-1;
	for(int i=0;i<=n;i++){
		if(s[i]==s[i+1]){
			cnt++;
		}else{
			cntmax=max(cntmax,cnt);
			cnt=1;
		}
	}
	cout<<cntmax<<endl;
}
