#include "stdc++.h"
int main(){
	int n;
	scanf("%i",&n);
	vector<int> np;
	for(int i=0;i<n;i++){
		int v;
		scanf("%i",&v);
		np.push_back(v);
	}
	int i=0;
	int value =0;
	sort(np.begin(), np.end());
	while(i<n){
		if (np[i]>value){
			value++;
			i++;
	}else{
		i++;
	}

	// Let's go Terry!
}
	printf("%i",value);
}