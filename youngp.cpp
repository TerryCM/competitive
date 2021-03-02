#include <iostream>
using namespace std;
int main(){
	int n;
	int x,y,z;
	int totalx =0 , totaly = 0,  totalz = 0;
	scanf("%i",&n);
	while(n--){
		scanf("%i %i %i",&x,&y,&z);
		totalx+=x;
		totaly+=y;
		totalz+=z;
	}

	if(totalx==0 && totaly==0 && totalz==0){
		printf("YES");
	}else{
		printf("NO");
	}
}

