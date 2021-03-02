#include <iostream>
#include <algorithm>
#include <functional>
#include <array>
#include <vector>
#include <list>
#include <math.h>
#include <deque>
typedef long long ll;

using namespace std;
int main(){
	int n;
	scanf("%i",&n);
	deque <ll> v;
	for(ll i=0;i<n;i++){
		ll c;
		scanf("%lld",&c);
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	ll total=0;
	while(!v.empty()){
		ll a = v.front();
		ll b = v.back();
		total+=pow(a+b,2);
		v.pop_back();
		v.pop_front();
	}
	// for(int i=0;i<n;i++){
	// 	printf("%i",v[i]);
	// }

	printf("%lld",total);
}