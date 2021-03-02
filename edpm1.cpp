#include <iostream>
int main(){
int z = 0;
int a=5;
int b =4;
int x = a;
int y = b;
while((y>0 && y%2==0) || (y%2!=0)){
	if(y>0 && y%2==0){
		y=y/2;
		x+=x;
	}else if(y%2!=0){
		y--;
		z+=x;
	}
}
printf("%d \n",z);
}