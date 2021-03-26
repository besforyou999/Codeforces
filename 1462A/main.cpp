#include <iostream>
#include <vector>

using namespace std;

int main() {

  int t;
  cin >> t;

  while (t--) {
      vector<int> v;
      int n;
      cin >> n;
	  
      while (n--) {
	        int temp;
	        cin >> temp;
	        v.push_back(temp);
	    }

	    int i = 0;
	    int pl = 0 , pr = v.size() - 1;

	    while (i < v.size()) {
	        if (i % 2 == 0) {
	            cout << v[pl++] << " ";
	        } else if (i % 2 == 1) {
	            cout << v[pr--] << " ";
	        }
	        i++;
	    }
	    cout << endl;
  }
  return 0;
}
