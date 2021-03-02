#include <stdio.h>
#include <stdlib.h>
#define nax 1000
int is_computed[nax];
int F[nax];
int fibonacci(int n){
	if (n < 2){
		return n;
	} else{
		if (is_computed[n] == 1){
			return F[n]; 
		} else{
			F[n] = fibonacci(n-1) + fibonacci(n-2);
			is_computed[n] = 1;
			return F[n];
		}
	}
}
 int main(int argc, char const *argv[])
{
	printf("%i",fibonacci(10));
}