#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
int n, a[N];
 
int main(){
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n-1;i++){
		cin>>a[i];
	}
	sort(a+1,a+n);
	for(int i=1;i<=n;i++){
		if(a[i]!=i){
			cout<<i<<endl;
			break;
		}
	}
}
