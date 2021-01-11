#include <iostream>
using namespace std;

bool czyPierwsza(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (czyPierwsza(a) == true) {
			cout << "TAK" << endl;
		}
		else {
			cout << "NIE" << endl;
		}
	}
	return 0;
}