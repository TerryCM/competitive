#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>> n;
	map<string,string> m;
	int t = n;
	while(t--){
		string v1, v2;
		cin>> v1 >> v2;
		m[v1] = v2;
	}
	set<string> s1, s2;
	set<string>result;

	for(auto i :m){
		s1.insert(i.first);
		s2.insert(i.second);

	}

	 set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), 
                        inserter(result, result.begin()));




	 for(auto i : result){
	 	auto it = m.find(i);
	 	// while(x<=5){
	 	// 	auto it2 = m.find(it->second);
	 	// 	if(it2 == m.end()){
	 	// 		it = it2;
	 	// 	}else{
	 	// 		break;
	 	// 	}
	 	// 	x++;
	 	// }
	 	string s1;
	 	while(true){
	 		s1 = it->second;
	 		if(m.find(s1)==m.end()){
	 			it = m.find(s1);
	 		}else{
	 			break;
	 		}
	 	}
	 	cout << i << it->second;
	 }
}