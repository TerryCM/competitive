#include <bits/stdc++.h> 
using namespace std;
int main (){
	string s;
	string ns;
	cin >> s;
	int i = 1;
	if (islower(s[0])){
		ns+=toupper(s[0]);
		while (s[i]){
			if(isupper(s[i])){
				ns+=tolower(s[i]);
			} else {
				cout << s;
				return 0;
			}
			i++;		

		}
		cout << ns; 
	} else if (isupper(s[0])){
		ns+=tolower(s[0]);
		while(s[i]){
			if(isupper(s[i])){
				ns+=tolower(s[i]);
			}else{
				cout<< s;
				return 0;
			}
			i++;
		}
		cout<<ns;
	}
	
}