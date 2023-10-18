#include <iostream>
#include <unordered_map>

int main() {
	unsigned int n;
	std::unordered_map<char, int> c; 
	std::cin >> n;
	
	char games[n];
	for(int i=0; i<n; i++) {
		std::cin >> games[i];
		c[games[i]]++;
	}

	if (c['A'] > c['D']) {
		std::cout << "Anton" << std::endl;
		exit(0);
	} else if (c['D'] > c['A']) {
		std::cout << "Danik" << std::endl;
		exit(0);
	}
	
	std::cout << "Friendship" << std::endl;
	return 0;
}
