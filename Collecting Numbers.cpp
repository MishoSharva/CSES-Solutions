#include <bits/stdc++.h>
using namespace std;
int n,l=1,mas[200001];
int main (){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		mas[x]=i;
	}
	int c=1;
	for(int i=1;i<=n;i++){
		if(l>mas[i]){
			c++;
		}
		l=mas[i];
	}
	cout<<c<<endl;
}