#include <iostream>
using namespace std;

int isLucky(int n){

	while(n>0){

		if(n%10==7 || n%10 == 4){
			n/=10;			
		}else{
			return 0;
		}
}
return 1;
	
}

int main(){
	int n;
	cin >> n;
	if (!isLucky(n)){
		for(int i=n;i>0;i--){
			if(n%i == 0 and isLucky(i) ){
				cout<< "YES";
				return 0;
			}
		}
		cout<< "NO";
	}else{
		cout << "YES";
	}

}