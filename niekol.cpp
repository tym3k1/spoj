#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	if (a <= 2) 
		{ cout << "NIE"; return 0; }
	if (a <= 2) 
		{ cout << "NIE"; return 0; }

	for (int i = 1; i <= a; i = i + 2) {
		cout << i << " ";
	}
	for (int i = 0; i <= a; i = i + 2) {
		cout << i << " ";
	}
	cout << endl;


	return 0;
}