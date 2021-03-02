#include <iostream>
#include <string>
using namespace std;
using std::string;

int main(){
	int c;
	string n;
	int x=0;
	cin>>c;
	while (c--){
		cin>>n;
		if(n=="++X"){
			++x;
		}else if(n=="X++"){
			x++;
		}else if(n=="--X"){
			--x;
		}else if(n=="X--"){
			x--;
		}
	}
	cout<<x;
	return 0;
}
