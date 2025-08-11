#include <bits/stdc++.h>
using namespace std;
int n,ans;
int main (){
	cin>>n;
	for(int i=5;n/i>=1;i*=5){
		ans+=n/i;
	}
	cout<<ans;
}