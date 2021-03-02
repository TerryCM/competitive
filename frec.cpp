#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){

	int n;
	int c;
	vector<int> v;
	map <int, int> m,pos;
	cin>>n >>c;
	for(int i=0;i<n;i++){
		cin>>v[i];
		m[v[i]]++;
		pos[v[i]] = i;
	}
	
	vector<pair<int, int>> v2;
	for(auto i:m){
		v2.push_back(make_pair(i.first,i.second));
	}
	sort(v2.begin(), v2.end(), [&](pair<int,int>a , pair<int,int>b)){
		if (a.second>b.second){
			return 1;
		} else {
			return pos[a.first] > pos[a.second];
		}

	}

	int done = 0;
	for(auto i:v2){
		for(int j=0;j<i.second;j++){
			cin>>i.first;
			done++;
			if (done < n){
				cout << " ";
			}
		}

	}

}




