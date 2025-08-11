#include<bits/stdc++.h>
#pragma GCC diagnostic warning "-std=c++11"
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	vector <int> mas(n);
	for(int i=0;i<n;i++){
		cin>>mas[i];
	}
	long long sum=0,ans=0;
	map<long long, long long> ms;
	ms[0]=1;
	for(int i : mas){
		sum+=i;
		ans+=ms[sum-x];
		ms[sum]++;
	}
	cout<<ans<<endl;
}