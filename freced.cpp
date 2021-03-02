
#include <iostream>
#include <vector>
using namespace std;
int main(){
	 float frmic;
	 float vec[100];
	 float  t;
	 printf("Escribe la frecuencia del microcontrolador \n");
	 cin>>frmic;
	 printf("Escribe la cantidad de operaciones \n");
	 cin >>t;
	 for(int i=0;i<t;i++){
	 	cin>>vec[i];
	 }
	 for(int i=0;i<t;i++){
	 	float answ = frmic/(2*vec[i]) - 1;
	 	cout << answ << "\n";
	 }



}