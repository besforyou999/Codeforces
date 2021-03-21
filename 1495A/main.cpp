#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
	
		int n;
		double ans=0;
		vector<int> mine, miner;

		cin >> n;
		int v_length=n;
		n *= 2;

		while (n--) {
			int n1,n2;

			cin >> n1 >> n2;

			if (n1 == 0 ) {
				if (n2 < 0 ) n2 *= -1;
				miner.push_back(n2);
			}
			else if (n1 != 0 ) {
				if (n1 < 0 ) n1 *= -1;
				mine.push_back(n1);
			}
		}

		sort(miner.begin(),miner.end());
		sort(mine.begin(),mine.end());

		
		for (int i = 0; i < v_length ; i++ ) {
			double dtemp = pow(mine[i],2) + pow(miner[i],2);
			ans += sqrt(dtemp);
		}
		cout << fixed;
		cout.precision(15);		
		cout << ans << endl;
	}
return 0;
}

