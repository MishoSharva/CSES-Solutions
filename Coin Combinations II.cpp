#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int dp[1000001],n,x,mas[1000001];
int main (){
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>mas[i];
	}
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=x;j++){
			if(j-mas[i-1]>=0){
				dp[j]+=dp[j-mas[i-1]];
				dp[j]%=1000000007;
			}
		}
	}
	cout<<dp[x]<<endl;
}