#include <iostream>
using namespace std;

string reverse (string word, int l){
	if (l == word.length()){
		return word;
	}

	word = word.substr(1) + word[0];
	return reverse(word, l+1);


}
int main(){
	string word;

	cin >> word;
	word = reverse(word,0);
	cout << word; 

}