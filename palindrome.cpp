#include <iostream>
using namespace std;
bool ispalindrome (string word){
if(word == ""){
		return true;
	} 

if(word[0] == word[word.length()-1] && ispalindrome(word.substr(1,word.length()-2))){
	return true;
} else return false;

}
int main(){
	string word;
	cin >> word;
	if (ispalindrome(word)){
		cout << "Is palindrome "<< endl;
	} else {
		cout << "Not palindrome "<<endl;

	}

return 0;

}