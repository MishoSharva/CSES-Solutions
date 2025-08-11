#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
	string s,s2;
	cin>>s>>s2;
	int dp[s.size()+1][s2.size()+1];
	for(int i=0;i<=s.size();i++){
		for(int j=0;j<=s2.size();j++){
			if(i==0){
				dp[i][j]=j;
			}else{
				if(j==0){
					dp[i][j]=i;
				}else{
					if(s[i-1]==s2[j-1]){
						dp[i][j]=dp[i-1][j-1];
					}else{
						int dpmn=min(dp[i-1][j],dp[i][j-1]);
						dp[i][j]=min(dpmn,dp[i-1][j-1])+1;
					}
				}
			}
		}
	}
	cout<<dp[s.size()][s2.size()];
}
