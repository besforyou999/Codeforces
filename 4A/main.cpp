#include <iostream>

using namespace std;

int main() {
  
  int w,i;
  
  cin >> w;

  for ( i = 2 ; i < w ; i += 2 ) {
	  int part2 = w - i;
	  if ( part2 % 2 == 0 ) {
		  cout << "YES" << endl;
		  return 0;
	  }
  }

  cout << "NO";

  return 0;
}
