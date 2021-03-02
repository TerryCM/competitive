#include <iostream>
using namespace std;
#define nax 1000000
// F[n] = 
int main(){
	int k , n;
	int F[nax];
	scanf("%d %d",&n,&k);
	int set[nax];
	for (int i=0;i<n;i++){
		scanf("%d",&set[i]);
	}
 	

	for(int i=0;i<=k;i++){
		for(int j=0;j<n;j++){
			if((i - set[j]) >= 0 && !F[i-set[j]]){
				F[i] = 1;
			}
		}
	}
	for(int i=0;i<=k ;i++){
		printf("%d",F[i]);
	}


if(F[k] == 1){
	printf("First");
} else{
	printf("Second");
}

}