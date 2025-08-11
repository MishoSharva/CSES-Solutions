#include<bits/stdc++.h>
using namespace std;
int n,m,dp[1000][1000];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=1e9;
		}
	}
	for(int i=0;i<=n;i++){
		dp[i][i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=0;k<max(i,j);k++){
				if(k<=j){
					dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
				}
				if(k<=i){
					dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
				}
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}