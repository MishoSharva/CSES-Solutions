#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int n,x,mas[1000001],dp[1000001];
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	for(int i=1;i<=1000001;i++){
		dp[i]=1e8;
	}
	for(int i=1;i<=x;i++){
		for(int j=1;j<=n;j++){
			if(i>=mas[j]){
				dp[i]=min(dp[i],dp[i-mas[j]]+1);
			}
		}
	}
	if(dp[x]==1e8){
		cout<<"-1"<<endl;
		return 0;
	}
	cout<<dp[x]<<endl;
}
