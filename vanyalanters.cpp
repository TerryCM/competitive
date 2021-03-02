#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n, l , c;
	vector <int> v;
	cin >> n >> l;
	for(int i = 0 ; i < n ; i ++ ){
		cin >> c;
		v.push_back(c);
	}

	sort(v.begin(), v.end());

	float tryD, minD = v[0];
	for(int i=0; i<n-1 ; i ++){
		tryD = (v[i+1] - v[i] ) / (float) 2 ;
		if( tryD > minD){
				minD = tryD;
		} 
	}

	if (minD < l - v[n-1] ){
		minD = l - v[n-1];
	}
		cout<<fixed;
		cout<<setprecision(9)<<minD;
		

}



