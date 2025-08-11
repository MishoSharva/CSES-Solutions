#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic warning "-std=c++11"
#define ll long long
#define pb push_back
int main(){
	ll n,ans=1;
	cin>>n;
	vector<ll> v(n);
	vector<ll> m(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	if(n==0){
		cout<<"0"<<endl;
		return 0;
	}
	m[0]=v[0];
	for(int i=1;i<n;i++){
		auto a=m.begin()+ans;
		auto it=lower_bound(m.begin(), a, v[i]);
		if(it==m.begin()+ans){
			m[ans]=v[i];
			ans++;
		}else{
			*it=v[i];
		}
	}
	cout<<ans<<endl;
}