#include <bits/stdc++.h> 
using namespace std;
int main(){
	int s,n;
	cin >> n;
	vector <int> v;
	for(int i = 0 ; i < n ; i++){	
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), greater<int>());
	int sl = 0 , sr,i;

	for(i = 0 ; i < n  ; i++){
		// cout<<v[i]<<endl;
		sl+= v[i];
			sr = 0;
			for(int j = n-1; j > i ; j--){
				sr+=v[j];
			}
			if(sl > sr) break;	
	}

	cout << i+1 ;
}
