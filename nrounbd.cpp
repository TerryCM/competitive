#include <bits/stdc++.h> 
using namespace std;
int main (){
	int n , k;

	cin >> n >> k ;
	vector <int> v;
	int s;
	for(int i = 0 ; i < n ; i++){
		cin>>s;
		v.push_back(s);
	}
	
	sort(v.begin(), v.end(), greater<int>());
	int c = 0;
	int num;
	for(int i=0 ; i < k ; i ++){
		if(v[i] <= 0) break;
		c++;
		num = v[i];
	}

	for(int i=k; i < n ; i ++){
		if(v[i]!=num || v[i]<=0) break;
		 c++;
	}

	cout << c;
}
