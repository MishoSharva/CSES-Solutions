#include <bits/stdc++.h>
using namespace std;
multiset <int> mas;
multiset <int>::iterator it;
int main (){
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		it=mas.upper_bound(k);
		if(it==mas.end()){
			mas.insert(k);
		}else{
			mas.erase(it);
			mas.insert(k);
		}
	}
	cout<<mas.size()<<endl;
}