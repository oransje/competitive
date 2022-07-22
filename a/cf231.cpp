#include <iostream>
using namespace std;

int main() {
	int n, p, v, t, j;
	j = 0;
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> p;
		cin >> v;
		cin >> t;

		int r = p + v + t;
		if(r > 1) {
			j++;
		}
	}

	cout << j << endl;
	return 0;
}
