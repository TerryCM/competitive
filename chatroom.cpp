#include <iostream>
#include <string>
#include <string>
#include <stack>
using namespace std;
int main(){
	string word;
	cin >> word;
	int n = word.size();
	int i=0;
	while(i<n){
		if(word[i]=='h'){
			while(i<n){
				if (word[i] == 'e'){
					while(i<n){
						if(word[i]== 'l'){
							while(i<n){
								if(word[i]=='l'){
									while(i<n){
										if(word[i] == 'o'){
											cout << "YES";
											return 0;
										}
									i++;
									}
								}
							i++;
							}
						}
					i++;
					}
				}
			i++;	
			}
		}
	i++;
	}
  cout << "NO";
}