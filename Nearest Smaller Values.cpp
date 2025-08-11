#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
	int n;
	cin>>n;
	vector <pair<int,int> > v (n);
	for(int i=1;i<=n;i++){
		int ans=0,x;
		cin>>x;
		while(v.size()){
			if(v.back().first>=x){
				v.pop_back();
			}else{
				ans=v.back().second;
				break;
			}
		}
		v.pb({x,i});
		cout<<ans<<endl;
	}
}