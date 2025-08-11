#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic warning "-std=c++11"
#define ll long long
#define pb push_back
int main(){
	ll n,a,b;
	cin>>n;
	vector<pair <ll,ll> > mas(n);
	for(int i=0;i<n;i++){
		cin>>mas[i].first>>mas[i].second;
	}
	sort(mas.begin(),mas.end());
	ll ans=0,cr=0;
	for(auto x : mas){
		cr+=x.first;
		ans+=x.second-cr;
	}
	cout<<ans;
}