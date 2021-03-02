#include <bits/stdc++.h>
int main(){
	int n;
	cin >> n;
	map <string,int> m;
	while(n--){
		string v;
		cin>>v;
		m[v]++;
		auto it = m.find(v);
		if(it->second > 1){
			cout<< "YES\n";
		} else{
			cout << "NO\n";
		}
	}

}