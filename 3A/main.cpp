#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string squareS;
    string squareT;

    cin >> squareS;
    cin >> squareT;

    int first = squareS[0] - squareT[0];
    int second = squareS[1] - squareT[1];

    int minimumKingMoves = abs(first) >= abs(second) ? abs(first) :abs(second);

    cout << minimumKingMoves << endl;

    for (int i = 0; i < minimumKingMoves ; i++) {

        string movement;

        if ( first < 0 ) { // means position t is right to s
            movement = "R" + movement;
            first++;
        }
        else if ( first > 0 ) {  // means position t is left to s
            movement = "L" + movement;
            first--;
        }

        if ( second < 0 ) { // means position t is higher than s
            movement = movement + "U";
            second++;
        }
        else if ( second > 0 ) { // means position t is lower than s
            movement = movement +"D";
            second--;
        }

        cout<< movement << endl;
    }
    return 0;
}

