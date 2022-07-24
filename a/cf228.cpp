#include <iostream>
#include <algorithm>
using namespace std;

#define LEN 4

int main () {
	int s[LEN];

	for(int i=0; i<LEN; i++)
		cin >> s[i];

	sort(s, s+LEN);

	int counter = 0;
	for(int i=0; i<LEN-1; i++) {
		bool rep = false;
		for(int j=i+1; j<LEN; j++) {
			if (s[j] == s[i]) {
				rep = true;
			}
		}

		if(rep) {
			counter++;
		}
	}

	cout << counter << endl;


	return 0;
}
