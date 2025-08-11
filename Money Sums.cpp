#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic warning "-std=c++11"
#define ll long long
#define pb push_back
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	if(n==1){
		cout<<1<<endl;
		cout<<v[0]<<endl;
		return 0;
	}
	bool dp[n+1][n*1000+1]; //maximum ramdeni jamic iqneba, radgan v[i] maximumaa 1000
	dp[0][0]=true;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n*1000;j++){
			dp[i][j]=dp[i-1][j];
			int l=j-v[i-1];
			if(l>=0 && dp[i-1][l]){
				dp[i][j]=true;
			}
		}
	}
	vector <int> count;
	for(int j=1;j<=n*1000;j++){
		if(dp[n][j]){
			count.push_back(j);
		}
	}
	cout<<count.size()<<endl;
	for(auto x : count){
		cout<<x<<" ";
	}
}