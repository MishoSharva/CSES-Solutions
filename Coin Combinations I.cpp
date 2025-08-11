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
	for(int i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(i-mas[j]>=0){
				dp[i]+=dp[i-mas[j]];
				dp[i]%=1000000007;
			}
		}
	}
	cout<<dp[x]<<endl;
}