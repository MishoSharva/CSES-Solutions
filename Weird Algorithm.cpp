#pragma GCC diagnostic warning "-std=c++11"
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const int N=2e5+5;
ll n;
 
int main(){
	cin>>n;
	cout<<n<<" ";
	while(n>1){
		if(n%2==0){
			n/=2;
			cout<<n<<" ";
		}else{
			n=n*3+1;
			cout<<n<<" ";
		}	
	}
}
