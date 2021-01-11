#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int a, b, n, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		a %= 10;
		cin >> b;
		if (b > 0) {
			if (b % 4 == 0) {
				b = 4;
			}
			else {
				b = b % 4;
			}
			int wynik = a;
			for (int j = 1; j < b; j++) {
				wynik *= a;
			} cout << wynik % 10 << endl;
		}
		else {
			cout << 1 << endl;
		}


	}
	return 0;
}
