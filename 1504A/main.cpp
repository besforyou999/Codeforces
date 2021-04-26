#include <iostream>
#include <string>

using namespace std;

bool palindrome(string s) {
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
		
		if (!palindrome(s + 'a')) {
			cout << "YES" << endl;
		  cout <<	s << 'a' << endl;
		} else if ( !palindrome('a'+ s)) {
			cout << "YES" << endl;
			cout << 'a' << s << endl;
		} else {
			cout << "NO" << endl;
		}

	}	
}

