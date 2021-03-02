
#include <algorithm>
#include <iostream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
int main(){
	vector <int> v;
	int n;
	int total = 0;
	for(int i=0;i<5;i++){
		cin>>n;
		total+=n;
	}
	if(total%5==0 || total ==0){
		cout<<total/5;
	}else{
		cout<<"-1";
	}


}