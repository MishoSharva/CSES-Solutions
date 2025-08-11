#include <bits/stdc++.h>
using namespace std;
long long mas[5001],dp1[5001][5001],dp2[5001][5001],prefix[5001];
int main (){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
		prefix[i]=prefix[i-1]+mas[i];
	}
	for(int i=1;i<=n;i++){
		dp1[i][i]=mas[i];
		dp2[i][i]=0;
	}
	for(int len=2;len<=n;len++){
		for(int l=1;l<=n;l++){
			int r=l+len-1;
			if(r>n){
				break;
			}
			dp1[l][r]=max(mas[l]+dp2[l+1][r],mas[r]+ dp2[l][r-1]);
			dp2[l][r]=(prefix[r]-prefix[l-1])-dp1[l][r];
		}
	}
	cout<<dp1[1][n]<<endl;
}
