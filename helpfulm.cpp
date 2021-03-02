
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main(){
	string number;
	cin>>number;
	vector<char> v;
	for(int i=0;i<number.length();i++){
		if(number[i] !='+'){
			v.push_back(number[i]);
		}
	}
	sort(v.begin(), v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i];
		if(i<v.size()-1) cout<<'+';
	}
}