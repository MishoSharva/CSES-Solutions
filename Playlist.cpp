#include <bits/stdc++.h>
using namespace std;
int n,mas[2000001],ans,l;
map <int,int>lse;
int main (){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	for(int i=1;i<=n;i++){
		l=max(l,lse[mas[i]]);
		ans=max(ans,i-l);
		lse[mas[i]]=i;
	}
	cout<<ans;
}