#include <bits/stdc++.h>
using namespace std;
long long mas[10000001];
int main (){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	long long l=1,r=1e18,ans=0;
	while(l<=r){
		long long mid=(l+r)/2,sum=0;
		for(int i=1;i<=n;i++){
			sum+=(mid/mas[i]);
			if(sum>=k){
				break;
			}
		}
		if(sum>=k){
			ans=mid;
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	cout<<ans<<endl;
}