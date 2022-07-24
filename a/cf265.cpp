#include <iostream>
#include <string>
using namespace std;

int main() {
	string pos, moves;
	int bas_pos;

	cin >> pos;
	cin >> moves;

	bas_pos = 1;
	char current;
	for(int i=0; i<= moves.length(); i++) {
		current = pos[bas_pos-1];
		if (moves[i] == current) {
			bas_pos = bas_pos + 1;
		}
	}

	cout << bas_pos << endl;
	return 0;
}
