#include <iostream>

using namespace std;

int main() {
  int strokes = 0;
  string board[8];

  for (int i = 0; i < 8 ; i++) {
    cin >> board[i];
  }

  for (int i = 0; i < 8 ; i++) {
	int checker = 1;
	if (board[0][i] == 'B') {
	  for (int j = 1 ; j < 8; j++) {
		if (board[j][i] != 'B') {
		  checker = 0;
		}
	  }
	  if ( checker == 1 ) {
		strokes += 1;
	  }
	}
  }

  for (int i = 0; i < 8 ; i++) {
	int checker = 1;
	if (board[i][0] == 'B') {
	  for (int j = 1 ; j < 8; j++) {
		if (board[i][j] != 'B') {
		  checker = 0;
		}
	  }
	  if ( checker == 1 ) {
		strokes += 1;
	  }
	}
  }

  if (strokes == 16) {
	cout << 8;
	return 0;
  }

  cout << strokes;
  return 0;
}

