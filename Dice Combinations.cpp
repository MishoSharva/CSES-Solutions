#include <bits/stdc++.h>
using namespace std;
long long n,dp[1000001];
int main (){
	cin>>n;
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=i-1;j>=i-6;j--){
			if(j<0){
				break;
			}
			dp[i]+=dp[j];
			dp[i]%=1000000007;
		}
	}
	cout<<dp[n]%1000000007<<endl;
}
