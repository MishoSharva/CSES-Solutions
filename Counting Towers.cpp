#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll dp[1000001][2];
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		dp[1][1]=1;
		dp[1][2]=1;
		for(int i=2;i<=n;i++){
			dp[i][1]=(dp[i-1][1]*4+dp[i-1][2])%1000000007;
			dp[i][2]=(dp[i-1][1]+2*dp[i-1][2])%1000000007;
		}
		cout<<(dp[n][1]+dp[n][2])%1000000007<<endl;
	}
}