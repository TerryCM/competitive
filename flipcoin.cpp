#include <iostream>
using namespace std;
void flipCoin(int n, string sofar, int size){
	if ( n == size){
		cout << sofar <<endl;
	}else{
		flipCoin(n,sofar+'H',size+1);
		flipCoin(n,sofar+'T',size+1);
	}
}
int main (){
	flipCoin(4,"",0);
	// 
}