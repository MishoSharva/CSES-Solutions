#include<bits/stdc++.h>
#pragma GCC diagnostic warning "-std=c++11"
using namespace std;
#define ll long long
#define pb push_back
int n,m;
vector<vector<int> >v(200001);
vector <int> road;
bool seen[200001]={false};
void cnt(int a){
	seen[a]=true;
	for(auto x : v[a]){
		if(!(seen[x])){
			cnt(x);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		if(!(seen[i])){
			road.push_back(i);
			cnt(i);
		}
	}
	cout<<road.size()-1<<endl;
	for(int i=1;i<road.size();i++){
		cout<<road[i]<<" "<<road[i]-1<<endl;
	}
}