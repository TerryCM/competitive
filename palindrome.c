#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define nax 1000
int solve(char word[nax] ,int pos, int size){
	if(pos == size-1){
		return 1;
	}
	else{
		if(word[pos]==word[size-pos-1]){
			return solve(word,pos+1,size);
		}
		else{
			return 0;
		}
	}
}
int main(){
	char word[nax];
	int size;
	scanf("%i",&size);
	scanf("%s",word);
	int sol = solve(word,0,size);
	if(sol==1){
		printf("Is Palyndrhome");
	}
	else{
		printf("Not Palyndrhome");
	}

}