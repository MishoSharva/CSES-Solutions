#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
int n, a[N];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int ans=1;
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-1]){
			ans++;
		}
	}
	cout<<ans<<endl;
}
