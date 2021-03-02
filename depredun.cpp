#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main(){
	map <int,int> m;
	map <int,int> m2;
	vector<int> vec;
	// string line;
	// getline(cin,line);
	// istringstream is(line);
	// istringstream is2(line);
	int n;
	while (cin>>n){
		m[n]+=1;
		m2[n]+=1;
		vec.push_back(n);
		cout<<n<<"\n";
		if(cin.eof()){
			break;
		}
	}
	// while(is>>n){
	// 	m[n]+=1;
	// 	m2[n]+=1;
	// }
	// printf("CAIA IAMA");
	// for(auto elem:m){
	// 	cout<<elem.first<<" "<< elem.second<<"\n";
	// }
	for(auto n: vec){
		if(m[n]==m2[n]){
			auto it = m.find(n);
			cout<<it->first<<" "<<it->second<<"\n";
			m[n]-=1;
		}
	}

}
