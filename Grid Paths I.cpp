#include<bits/stdc++.h>
using namespace std;
int n, dp[1001][1001];
char cxril[1001][1001];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>cxril[i][j];
		}
	}
	if(cxril[n-1][n-1]!='*'){
		dp[n-1][n-1]=1;
	}
	for(int i=n-2;i>=0;i--){
		if(cxril[i][n-1]!='*'){
			dp[i][n-1]=dp[i+1][n-1];
		}
		if(cxril[n-1][i]!='*'){
			dp[n-1][i]=dp[n-1][i+1];
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			if(cxril[i][j]!='*'){
				dp[i][j]=(dp[i][j+1]+dp[i+1][j])%1000000007;
			}
		}
	}
	cout<<dp[0][0]<<endl;
}