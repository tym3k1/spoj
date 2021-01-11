#include <iostream>
using namespace std;

int main() {
	int a, b = 42, c = 0;
	while (true){
		cin >> a;
		if (a == 42 && b != 42) {
			c ++;
			cout << a << endl;
		}
		else {
			cout << a << endl;
		}
			
		b = a;
		if (c == 3)
			break; 
	}

	return 0;
}