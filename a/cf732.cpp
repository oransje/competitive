#include <iostream>
using namespace std;

int main() {
	int k;
	int r;

	cin >> k;
	cin >> r;

	int c = 1;
	while(true) {
		if((k*c) % 10 == 0) {
			break;
		}

		
		if(((k*c) - r) % 10 == 0) {
			break;
		} 
		c++;
	}

	cout << c << endl;


	return 0;
}
