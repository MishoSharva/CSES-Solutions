#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
int n, a[N];
 
int main(){
	cin>>n;
	ll p;
	for(ll i=1;i<=n;i++){
		p=i*i;
		ll ans = p*(p-1)/2;
		ans-= (i-1)*(i-2) *4;
		cout<<ans<<endl;
	}
}
