#include <bits/stdc++.h>
using namespace std;
long long n,x,y,ans=0,mx=0;
vector<pair <int,bool> > v;
int main (){
	cin>>n;
	while(n--){
		cin>>x>>y;
		v.push_back({x, true});
		v.push_back({y, false});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(v[i].second==true){
			ans++;
			mx=max(ans,mx);
		}else{
			ans--;
		}
	}
	cout<<mx<<endl;
}
