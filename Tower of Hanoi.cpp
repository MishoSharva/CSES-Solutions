#include<bits/stdc++.h>
using namespace std;
int n;
void solve(int a,int b,int c,int n){
	if(n==0){
		return;
	}
	solve(a,c,b,n-1);
	cout<<a<<" "<<c<<endl;
	solve(b,a,c,n-1);
}
int main(){
	cin>>n;
	int ans;
	for(int i=1;i<=n;i++){
		ans=(ans*2)+1;;
	}
	cout<<ans<<endl;
	solve(1,2,3,n);
}
