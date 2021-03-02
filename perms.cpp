#include <iostream>
#include <string>
using namespace std;
void printpermut(string sofar, string name){
	if( name == ""){
		cout << sofar << endl;
	}
	else{
		for(int i=0; i < name.length() ; i++){
			printpermut(sofar + name[i], name.substr(0,i) + name.substr(i+1));
		}

	}
}
int main(){
	printpermut("","saki");
}