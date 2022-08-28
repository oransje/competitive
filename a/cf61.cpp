#include <iostream>
#include <string>
using namespace std;

int main() {
	string f;
	string s;

	getline(cin, f);
	getline(cin, s);

	string result(f.length(), '\0');
	int i=0;
	while(i < f.length()) {
		if(f[i] == s[i]) {
			result[i] = '0';
		} else {
			result[i] = '1';
		}
		i++;
	}

	cout << result << endl;
	return 0;
}
