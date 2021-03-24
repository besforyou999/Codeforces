#include <iostream>
#include <string>

using namespace std;

int main() {
  
	int t;
  cin >> t;

  while (t--) {

	  string s;
	  cin >> s;

	  int index = 0;

	  while (index < s.size()) {
	    //alice
	    if (index % 2 == 0) {
	      if (s[index] == 'a') {
		      s[index] = 'b';
		    } else {
	        s[index] = 'a';
	      }
	    } else if (index % 2 == 1) {
	        if (s[index] == 'z') {
	          s[index] = 'y';
	        } else {
	            s[index] = 'z';
	        }
			}
	    index++;
    }

	  cout << s << endl;
  }

  return 0;
}
