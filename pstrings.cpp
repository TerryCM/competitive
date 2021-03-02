#include<iostream>
#include<string>
using namespace std;

int main(){
string a;
string b;
cin>> a >> b;
for(auto& c : a ){
	c = tolower(c);
}
for(auto&c : b){
	c = tolower(c);
}
if (a==b){
	cout<<0;
}else if(a<b){
	cout<<-1;
}else{
	cout<<1;
}

}