#include <iostream>
using namespace std;
#define nax 100000
int main(){
	int F[nax];
	int v[nax];
	int n; 
	scanf("%i",&n);
	for(int i = 0  ; i <n ; i++){
		scanf("%i",&v[i]);
	}
	F[0] = 0;
	F[1] = abs(v[1] - v[0]);
	for(int i=2;i<n;i++){
		F[i] = min(F[i-1] + abs(v[i] - v[i-1]), F[i-2] + abs(v[i] - v[i-2]));
	}

	printf("%i",F[n-1]);

}