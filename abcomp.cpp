#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum1=0;
	for(int i=0;i<n;i++){
		int v;
		cin>>v;
		sum1+=v;
	}
	int sum2=0;
	for(int i=0;i<n-1;i++){
		int v;
		cin>>v;
		sum2+=v;
	}
	int sum3=0;
	for(int i=0;i<n-2;i++){
		int v;
		cin>>v;
		sum3+=v;
	}
	cout<<sum1-sum2<<"\n";
	cout<<sum2-sum3;
}
