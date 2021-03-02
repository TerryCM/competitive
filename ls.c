#include <stdio.h>
#include <stdlib.h>
#define nax 100
int main(){
	int L[10];
	int n = 10;
	for(int i=0;i < n ;i++){
		L[i] = 0;
	}
	int e[10] = {10 , 20 , 1, 2, 3, -2 ,3 , 4 , 1, 2};
	L[0] = 1;
	for(int i=1 ; i < n ; i++ ){
		for(int j=0; j < i ;j++){
			if (e[i] >  e[j] && (L[i] < L[j] || L[i] == L[j] )){
				L[i]=L[j] + 1;
			}
		}
	}

	int maxv = L[0];
	for(int i = 1 ; i<n;i++){
		maxv  =  L[i] > maxv ? L[i] : maxv;
	}

	printf("%i",maxv);
}	