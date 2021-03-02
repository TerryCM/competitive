#include<iostream>
#include <vector>
#include <queue>
#define nax 100000
using namespace std;
int main(){
	int n;
	char v[nax];
	scanf("%i",&n);
	for(int i=0;i<n;i++){
		scanf(" %c",&v[i]);
	}
	// for(int i=0;i<n;i++){
	// 	printf("%c",v[i]);
	// }
	int counter =0;
	for(int i=0;i<n;i++){
		if((v[i] - '0') %2==0){
			counter+=i+1;
		}
		
	}
	printf("%i",counter);

}


