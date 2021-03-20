#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n,q;
	int oneCounter =0, zeroCounter = 0;
	vector<int> v;
	cin >> n >> q;

	while(n--) {
		int temp;
		cin >> temp;
		if ( temp == 0 ) {
			zeroCounter += 1;
		}
		else if (temp == 1) {
			oneCounter += 1;
		}
		v.push_back(temp);
	}

	while (q--) {
	
		int t, secondValue;
		cin >> t >> secondValue;
		
		if (t == 1 ) {
			int v_value = v[secondValue-1];
			v[secondValue-1] = 1 - v[secondValue-1];
			if (v_value == 1 ) {
				zeroCounter += 1;
				oneCounter -= 1;
			}
			else if (v_value == 0 ) {
				zeroCounter -= 1;
				oneCounter += 1;
			}
		}
		else if (t==2) {
			if (oneCounter >= secondValue ) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
	}
	
	return 0;
}
