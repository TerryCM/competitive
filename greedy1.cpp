#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int cantdinero , cantobj;
	int objeto[50];
	// supongamos que tienes una cierta cantidad de dinero, y tienes una cierta
	// cantidad de objetos , quieres saber cuantos objetos podras comprar como máximo
	// el problema aqui es no dejarle a la magia del greedy que pase:
	cin>> cantdinero >> cantobj; //leemos el dinero que tenemos  y la cantidad de objetos
	for(int i=0;i<cantobj;i++){
		cin>>objeto[i];
	}
	sort(objeto,objeto+cantobj); // ordenamos los objetos de menor a mayor


		// luego iteramos dentro de los objetos y empezamos a quitarle el precio que tenmos hasta
		// que sea 0 empezando por el menor precio.
	// credios a este loop a David Gries
	int i=0; 
	while(cantdinero>0 && i!=cantobj){
		cantdinero-=objeto[i];
		i++;
	}

	cout<<i;

}