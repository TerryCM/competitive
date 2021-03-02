
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
	string p;
	cin>>p;
	int moreseven = false;
	int cone = 0;
	int czero = 0;
	for(auto c:p){
		if(c=='1'){
			cone+=1;
			czero = 0;
			cout<<cone;
		}else{
			czero+=1;
			cone=0;
			cout<<czero;
		}
	if(cone >=7 || czero >=7){
		moreseven = true;
	}
	}
	if(moreseven){
		cout<<"YES";
	}else{
		cout<<"NO";
	}

}
