#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, x = 0;
		cin >> a;
		while (a >= 2) {
			if (a >= 2) {
				if (a % 2 == 0) {
					a = a / 2;
					x += 1;
				}
				else {
					a = (a * 3) + 1;
					x += 1;
				}
			}
			else {
				return x;
			}
		} cout << x << endl;
	}
	return 0;
}