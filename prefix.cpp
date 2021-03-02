#include <iostream>
using namespace std;
int main (){
	int n;
	int arr[50];
	int ARS[50];
	cin >> n;
	for(int i=0 ;i<n; i++){
		cin >> arr[i];
	}
	ARS[0] = arr[0];
	for(int i=1; i<n;i++){
		ARS[i]= ARS[i-1] + arr[i];
	}
	for(int i=0; i<n;i++) cout<< " " << ARS[i];
}
