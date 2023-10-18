#include <iostream>

int main() {
	unsigned int n;
	int c = 0;
	std::cin >> n;
	
	char games[n];
	for(int i=0; i<n; i++) {
		std::cin >> games[i];
		if(games[i] == 'A') {
			c++;
		} else {
			c--;
		}
	}

	if (c > 0) {
		std::cout << "Anton" << std::endl;
		exit(0);
	} else if(c < 0) {
		std::cout << "Danik" << std::endl;
		exit(0);
	}
	
	std::cout << "Friendship" << std::endl;
	return 0;
}
