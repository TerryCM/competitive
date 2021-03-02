#include <iostream>
#include <vector>
using namespace std;
#define nax 100005
int main(){
	int b;
	int m;
	vector<int> v;
	scanf("%i %i",&b,&m);
	for(int i=0;i<b;i++){
		int a;
		scanf("%i",&a);
		v.push_back(a);
	}
	int best= 0;
	int value = 0;
	int counter = 0;
	for(int i=0;i<b;i++){

		// for(int j=i;j<b;j++){
		// 	value+=v[j];
		// 	counter++;
		// 	if(value<=m && counter>best){
		// 		best = counter;
		// 	}

		// }
		if(value+v[i] >= b){
			if(counter > best){
				best = counter;
			}
			i--;
			value = 0;
			counter = 0;
		} else{
			value+=v[i];
			counter++;
		}

	}
	printf("%i",best);
}