#include <bits/stdc++.h>
using namespace std;
int n,m,a,b;
multiset <int,greater<int> > mas;
multiset <int,greater<int> >::iterator it;
int main (){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		mas.insert(a);
	}
	for(int i=1;i<=m;i++){
		cin>>b;
		it=mas.lower_bound(b);
		if(it==mas.end()){
			cout<<-1<<endl;
		}else{
			cout<<*it<<endl;
			mas.erase(it);
		}
	}
	return 0;
}