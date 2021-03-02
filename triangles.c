#include <stdio.h>
void triangulo(int a , int b , pos){
	if(pos>b){
		return;
	}else{
		for(int i=0;i<pos;i++){
			printf("*");
		}
		printf("\n");
		triangulo(a,b,pos+1);
	}

	for(int i=0;i<pos;i++){
		printf("*");
	}
	printf("\n");
return;
}


int main(){
	int a = 3;
	int b = 5;
	triangulo(a,b , a);
}