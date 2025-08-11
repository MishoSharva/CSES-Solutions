#include <bits/stdc++.h>
using namespace std;
long long n,q,mas[20000001],pref[20000001],a,b,ans;
int main (){
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
		pref[i]=pref[i-1]+mas[i];
	}
	while(q--){
		cin>>a>>b;
		cout<<pref[b]-pref[a-1]<<endl;
	}
}