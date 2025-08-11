#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
int n, a[N];
 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll y,x;
		cin>>y>>x;
		ll cnt=0;
		cnt=max(y,x)*max(y,x) - max(y,x) +1;
		if(max(y,x)%2==1){
			if(y<=x){
				cnt+=x-y;
				cout<<cnt<<endl;
			}else{
				cnt-=y-x;
				cout<<cnt<<endl;
			}
		}else{
			if(y<=x){
				cnt-=x-y;
				cout<<cnt<<endl;
			}else{
				cnt+=y-x;
				cout<<cnt<<endl;
			}
		}
	}
}