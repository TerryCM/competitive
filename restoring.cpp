#include<iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	int maxv = 0;
	for (int i=0;i<4;i++){
		int n;
		cin>>n;
		v.push_back(n);
		maxv = max(n,maxv);
	}
	for(int i=0;i<4;i++){
		if(v[i]!=maxv){
			cout<<maxv-v[i]<<" ";
		}
	}

}