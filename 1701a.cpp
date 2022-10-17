#include<iostream>
#include<vector>

int main() {
	int t = 0;
	std::cin >> t;
	while (t--) {
		int k = 0;
		std::vector<std::vector<int> > a(2, std::vector<int>(2));
		std::cin >> a[0][0] >> a[0][1];
		std::cin >> a[1][0] >> a[1][1];
		for (int i = 0; i < 2; i += 1) {
			for (int j = 0; j < 2; j += 1) {
				if (a[i][j] == 1) {
					k += 1;
				}
			}
		}
		if (k == 0) {
			std::cout << 0 << std::endl;
		}
		else if (k == 4) {
			std::cout << 2 << std::endl;
		}
		else {
			std::cout << 1 << std::endl;
		}
	}
}