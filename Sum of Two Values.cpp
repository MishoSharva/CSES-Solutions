#include <bits/stdc++.h>
using namespace std;
long long n,x,mas[200001],maso[200001];
set <long long> s;
int main (){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
		maso[i]=mas[i];
	}
	int num1,num2;
	sort(mas+1,mas+1+n);
	bool ans=false;
	for(int i=1;i<=n;i++){
		num2=mas[i];
		num1=x-num2;
		if(s.find(num1)!=s.end()){
			ans=true;
			break;
		}else{
			s.insert(mas[i]);
			continue;
		}
	}
	if(ans){
		for(int i=1;i<=n;i++){
			if(maso[i]==num1){
				maso[i]=-1;
				cout<<i<<endl;
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(maso[i]==num2){
				cout<<i<<endl;
				break;
			}
		}
	}else{
		cout<<"IMPOSSIBLE"<<endl;
		return 0;
	}
}
