#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while (n--){
		int a,b;
		cin >> a >>b;
		if(gcd(a,b) == 1){
			cout<< "Finite";
		} else{
			cout << "Infinite";
		}
	}
}