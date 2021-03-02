#include<iostream>
#include <deque>
#include <vector>
#include <map>
#define nax 310000
typedef long long ll;
using namespace std;
int main(){
	ll n , q;
	deque <ll> d;
	cin >> n >> q;
	map <int,pair<int,int>> m;
	vector<pair<int, int>> v2;
	int t = n;
	while(t--){
		ll v;
		cin>>v;
		d.push_back(v);
	}    

    ll i = 1;
	while(i <= n){
	ll val1 = d.front();
	d.pop_front();
	ll val2=d.front();
	d.push_front(val1);
	m[i] = make_pair(val1,val2);
			ll value = d.front();
			d.pop_front();
			if (value > d.front()){
				ll value2 = d.front();
				d.pop_front();
				d.push_back(value2);
				d.push_front(value);
			}else{
				d.push_back(value);
			}

	i++;
	 //v2.back();
}
	while(q--){
		ll va;
		cin>>va;
		if(va<=n){
			cout << m[va].first << " " << m[va].second;
		} else{
			cout << d.front() <<  " " << d[(va-n-1)%(n-1)+1];
		}
		printf("\n");

	}


}
