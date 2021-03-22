#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		
		vector<int> ai;

		for (int i = 0; i < n ; i++ ) {
			int temp;
			cin >> temp;
			ai.push_back(temp);			
		}

		sort(ai.begin(), ai.end());

		int smallest = ai[0];
		int smallestLevelCount=0;

		for (int z = 0; z < ai.size(); z++ ) {
			if ( ai[z] == smallest ) {
				smallestLevelCount += 1;
			}
			else 
				break;
		}

		cout << ai.size() - smallestLevelCount << endl;

	}

}

		
	
