#include <iostream>

using namespace std;

int main() {
  int d, sumTime;

  cin >> d;
  cin >> sumTime;

  int minTimeArr[30] = {0,};
  int maxTimeArr[30] = {0,};
  int minSum = 0 , maxSum = 0;

  for (int i = 0; i < d ; i++) {
    int min, max;
    cin >> min;
    cin >> max;
    minTimeArr[i] = min;
    maxTimeArr[i] = max;
	minSum += min;
	maxSum += max;
  }

  if (minSum <= sumTime && sumTime <= maxSum) {
	  cout << "YES" << endl;
	  for (int i = 0; i < d ; i++ ) {
		  int t = min(minTimeArr[i] + sumTime - minSum, maxTimeArr[i]);
		  cout << t << " ";

		  sumTime -= (t - minTimeArr[i]);
	  }
  }
  else {
	  cout <<"NO"<<endl;
  }

  return 0;
}

