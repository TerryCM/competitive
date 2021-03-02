#include<iostream>
#include <vector>
using namespace std;
int main(){
	int cordx;
	int cordy;


	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>v;
			if(v==1){
				cordx=j+1;
				cordy=i+1;
			}

		}
	}
	total = abs(cordx-3) + abs(cordy-3);
	cout<<total;
}