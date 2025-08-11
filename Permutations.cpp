#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
int n, a[N];
 
int main(){
	cin>>n;
	if(n<=3 && n>1){
		cout<<"NO SOLUTION"<<endl;
	}else{
		for(int i=1;i<=n;i++){
			if(i%2==0){
				cout<<i<<" ";
			}
		}
		for(int i=1;i<=n;i++){
			if(i%2==1){
				cout<<i<<" ";
			}
		}
	}
}
