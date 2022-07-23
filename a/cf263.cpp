#include <iostream>
#include <cmath>
using namespace std;

#define LEN 5
#define MID_POS 2

int main () {
	int m[LEN][LEN];
	int x, y, c;

	for(int i=0; i<LEN; i++) {
		for(int j=0; j<LEN; j++) {
			cin >> m[i][j];
			if (m[i][j] == 1) {
				x = i;
				y = j;
			}
		}
	}

	c = abs(x - MID_POS) + abs(y - MID_POS);
	cout << c << endl;

	return 0;
}
