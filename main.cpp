#include <iostream>
#include <unordered_set>

using namespace std;
using ll = long long;

const ll N = 1000000000000;

unordered_set<long long> set;

void makeSet() {
  for (ll i = 1; i * i * i <= N ; i++) {
	set.insert(i*i*i);
  }
}

void solve() {

  ll x ;
  cin >> x;

  for (ll i = 1 ; i * i * i <= x ; i++) {
    if (set.count(x - i*i*i)) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
  return ;
}

int main() {

  int t;
  cin >> t;

  makeSet();

  while (t--) {
	solve();
  }
  return 0;
}