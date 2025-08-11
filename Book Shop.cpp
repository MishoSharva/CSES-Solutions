#include<bits/stdc++.h>
using namespace std;
int dp[100001];
int main(){;
	int n,x;
	cin>>n>>x;
	int p[n],c[n];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		for(int j=100001;j>=c[i];j--){
			dp[j]=max(dp[j],dp[j-c[i]]+p[i]);
		}
	}
	cout<<dp[x];
}