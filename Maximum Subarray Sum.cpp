#include <bits/stdc++.h>
using namespace std;
long long n,mas[20000001],mx,s;
int main (){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	long long s=mas[1],mx=mas[1];
	for(int i=2;i<=n;i++){
		s=max(s+mas[i],mas[i]);
		mx=max(mx,s);
	}
	cout<<mx<<endl;
}
