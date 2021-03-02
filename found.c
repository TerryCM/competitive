#include <stdio.h>
#define nax 100

int solve(int array[nax],int pos,int size,int value){
	if (pos == size ){
		return 0;
	}
	else if(array[pos] == value){
			return 1;
		}
	else{
		return solve(array,pos+1,size,value);
	}


}
int main(){
	int n;
	int value;
	int array[nax];
	scanf("%i",&n);
	scanf("%i",&value);
	for(int i=0;i<n;i++){
		scanf("%i",&array[i]);
	}
	int answer = solve(array,0,n,value);
	if(answer == 1){
		printf("Found");
	}
	else{
		printf("Not found");
	}
}