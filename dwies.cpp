#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b=1, c=0, m, l, p;
	cin >> m;
	for (int k = 0; k < m; k++) {
		cin >> a;
		if (a < 10) {
			for (int i = 1; i <= a; i++) {
				b *= i;
			}

			l = b % 10;
			p = (b / 10) % 10;
			cout << p << " " << l;
			b = 1;
		}
		else {
			cout << 0 << " " << 0;
		}
	}


	return 0;
}