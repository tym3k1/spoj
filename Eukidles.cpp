#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a;
		cin >> b;
		while (a != b) {
			if (a < b) {
				b = b - a;
			}
			else {
				a = a - b;
			}
		}
		cout << a + b << endl;
	}
	return 0;
}