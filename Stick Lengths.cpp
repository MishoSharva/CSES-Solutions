#include <bits/stdc++.h>
using namespace std;
long long n,mas[2000001],the_thing,ans;
int main (){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	the_thing=(n+1)/2;
	sort(mas+1,mas+1+n);
	for(int i=1;i<=n;i++){
		if(mas[the_thing]<mas[i]){
			ans+=mas[i]-mas[the_thing];
		}
		if(mas[the_thing]>mas[i]){
			ans+=mas[the_thing]-mas[i];
		}
	}
	cout<<ans<<endl;
}