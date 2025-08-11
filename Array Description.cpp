#include<bits/stdc++.h>
using namespace std;
int mas[100001],dp[100001][201],ans;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	if(mas[1]==0){
		for(int j=1;j<=m;j++){
			dp[1][j]=1;
		}
	}else{
		dp[1][mas[1]]=1;
	}
	for(int i=2;i<=n;i++){
		if(mas[i]==0){
			for(int j=1;j<=m;j++){
				dp[i][j]+=dp[i-1][j-1];
				dp[i][j]%=1000000007;
				dp[i][j]+=dp[i-1][j];
				dp[i][j]%=1000000007;     
				dp[i][j]+=dp[i-1][j+1];
				dp[i][j]%=1000000007; 
			}
		}else{
			dp[i][mas[i]]+=dp[i-1][mas[i]-1];
			dp[i][mas[i]]%=1000000007;
			dp[i][mas[i]]+=dp[i-1][mas[i]];
			dp[i][mas[i]]%=1000000007;
			dp[i][mas[i]]+=dp[i-1][mas[i]+1];
			dp[i][mas[i]]%=1000000007;
		}
	}
	for(int j=1;j<=m;j++){
		ans+=dp[n][j];
		ans%=1000000007;
	}
	cout<<ans<<endl;
}