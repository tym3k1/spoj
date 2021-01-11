#include <iostream>
using namespace std;

int main() {
	double a, b, c, wyn;
	while (cin >> a >> b >> c) {
		wyn = ((b * b)) - ((4 * a) * c);
		if (wyn > 0) {
			cout << 2 << endl;
		}
		else if (wyn == 0) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
		

	}
	return 0;
}