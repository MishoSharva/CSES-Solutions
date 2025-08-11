#include<bits/stdc++.h>
using namespace std;
int n,cn,size,ans;
int main(){
	cin>>n;
	while(n!=0){
		int cn=n;
		int mx=0;
		for(int i=1;i<=7;i++){
			mx=max(cn%10,mx);
			cn/=10;
		}
		n-=mx;
		ans++;
		cn=n;
	}
	cout<<ans;
}
