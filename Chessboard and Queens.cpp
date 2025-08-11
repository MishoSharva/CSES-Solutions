#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll ans;
bool co[16],di[16],di2[16],dak[8][8];
void find(ll r){
	if(r==8){
		ans++;
		return;
	}
	for(int c=0;c<8;c++){
		if(co[c] || di[r+c] || di2[r-c+7] || dak[r][c]){
			continue;
		}
		co[c]=true;
		di[r+c]=true;
		di2[r-c+7]=true;
		find(r+1);
		co[c]=false;
		di[r+c]=false;
		di2[r-c+7]=false;			
	}
}
int main(){
	for(int i=0;i<16;i++){
		co[i]=false;
		di[i]=false;
		di2[i]=false;
	}
	string s;
	for(int i=0;i<8;i++){
		cin>>s;
		for(int j=0;j<8;j++){
			if(s[j]!='.'){
				dak[i][j]=true;
			}
		}
	}
	find(0);
	cout<<ans<<endl;
}