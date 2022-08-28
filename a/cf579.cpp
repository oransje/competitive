#include <iostream>
using namespace std;

int main() {
	int x;
	int b = 1;

	cin >> x;
	
	while((x != 0) && (x & (x-1))) {
		int res = x;
		int leftmost;

		for(leftmost = 1; res !=0; leftmost = leftmost <<1) {
			res = res >> 1;
		}

		leftmost = leftmost >> 1;
		x = x ^ leftmost;
		b++;
	}

	cout << b << endl;

	return 0;
}
