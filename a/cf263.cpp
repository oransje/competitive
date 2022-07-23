#include <iostream>
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

	c = 0;
	// Turn horizontal
	while(y != MID_POS) {
		int t = y - MID_POS;
		if (t > 0) {
			m[x][y] = 0;
			y = y - 1;
			m[x][y] = 1;
		}

		if (t < 0) {
			m[x][y] = 0;
			y = y + 1;
			m[x][y] = 1;
		}

		c++;
	}

	// turn vertical
	while(x != MID_POS) {
		int t = x - MID_POS;
		if (t > 0) {
			m[x][y] = 0;
			x = x - 1;
			m[x][y] = 1;
		}

		if (t < 0) {
			m[x][y] = 0;
			x = x + 1;
			m[x][y] = 1;
		}

		c++;
	}

	cout << c << endl;

	return 0;
}
