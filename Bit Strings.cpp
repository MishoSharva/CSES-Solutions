#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
ll mod=1000000007;
ll n, a[N];
 
int main(){
	cin>>n;
	ll ans=1;
	for(int i=1;i<=n;i++){
		ans*=2;
		ans%=mod;
	}
	cout<<ans<<endl;
}