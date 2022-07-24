#include <iostream>
using namespace std;

int main () {
	bool colored;
	int n, m;

	cin >> n;
	cin >> m;

	char input[n][m];
	colored = false;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> input[i][j];
			char test = input[i][j];
			if (test == 'C' || test == 'M' || test == 'Y') {
				colored = true;
			}
		}
	}

	if (colored) {
		cout << "#Color" << endl;
	} else {
		cout << "#Black&White" << endl;
	}
	
	return 0;
}
