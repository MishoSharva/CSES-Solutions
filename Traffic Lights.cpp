#include <bits/stdc++.h>
using namespace std;
int n,mas[2000001],len;
multiset <int> cords;
multiset <int> dist;
int main (){
	cin>>len>>n;
	for(int i=1;i<=n;i++){
		cin>>mas[i];
	}
	cords.insert(0);
	cords.insert(len);
	dist.insert(len);
	for(int i=1;i<=n;i++){
		int r=*cords.upper_bound(mas[i]);
		int l=*(--cords.lower_bound(mas[i]));
		cords.insert(mas[i]);
		
		dist.erase(dist.find(r-l));
		dist.insert(mas[i]-l);
		dist.insert(r-mas[i]);
		
		cout<<*(--dist.end())<<endl;
	}
	return 0;
}