#include <bits/stdc++.h>
using namespace std;
int main (){
	int t,a,b,tst,tstt;
	cin>>t;
	while(t--){
		cin>>a>>b;
		tst=min(a,b);
		tstt=max(a,b);
		if(((a+b)%3==0 && tst!=0 && tst*2>=tstt) or (tstt==0)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
