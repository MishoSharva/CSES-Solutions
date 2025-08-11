#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
int n,k,ans;
int mas[200001];
int main () {
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		cin>>mas[i];
	}
	sort (mas+1,mas+1+n);
	int l=1;
	for (int i=n;i>=1;i--){
		if (i<l){
			break;
		}
		if (mas[i]+mas[l]<=k){
			l++;
		}
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
