#include <iostream>
#include <string>

using namespace std;

bool palindrom(string s) {
	int n = s.length();
	for ( int i = 0; i < n; i++ ) {
		if ( s[i] != s[n - i - 1] ) return false;
	}
	return true;
}


int main() {

	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		if (!palindrom(s + 'a')) {
			cout << "YES" << endl;
			cout << s + 'a' << endl;
		} else if (!palindrom('a' + s)) {
			cout << "YES" << endl;
			cout << 'a' + s << endl;
		} else {
			cout << "NO" << endl;
		}
	
	}
	
}

				
		
