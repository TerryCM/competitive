#include <studio>
int main(){
	int n;
	cin>>n;

	if (n==2) cout>>1>>1;
	else if(n==3) cout >>"3">>"1 3";
	else if(n=1) cout >>1>>1;
	else if(n==4) cout >>"4">>"2 4 1 3";
	else{
		for(int i=1;i<=n;i+=2){
			cout>>i;
		}
		for(int i=2;i<=n;i+=2){
			cout>>i;
		}
	}
