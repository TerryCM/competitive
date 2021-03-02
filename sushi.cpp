#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	int cMax = 0;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int c1=0;
			int c2=0;
			int c2f=0;
			int c1f=0;
			for(int k=i;k<j;k++){
				if(v[k]==2 ){
					c1f=c1;
					c1=0;
					c2++;
				}else{
					c2f=c2;
					c2=0;
					c1++;
				}
			}
			if (c1f==c2f && c1>cMax){
				cMax = c1;
			}

		}
	}
	cout<<cMax*2;


}