#include <iostream>
using namespace std;

int main() {
	int a, b, i;

	cin >> a;
	cin >> b;

	i = 0;
	while(a <= b) {
		a = a * 3;
		b = b * 2;
		i++;
	}

	cout << i << endl;
	return 0;
}
