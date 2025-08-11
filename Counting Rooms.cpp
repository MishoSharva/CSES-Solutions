#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int n,m;
char mas[10001][10001];
int fix[1001][1001];
bool check(int x,int y){
	return 1<=x && x<=n && 1<=y && y<=m && fix[x][y]==0;
}
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
void rec (int x,int y){
	fix[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(check(nx,ny) && mas[nx][ny]=='.'){
			rec(nx,ny);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mas[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(mas[i][j]=='#' or fix[i][j]==1) continue;
			rec(i,j);
			ans++;
		}
	}
	cout<<ans<<endl;
}