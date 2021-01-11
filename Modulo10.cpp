#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		int b = 0;
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			b = (b * 2 + int(s[j])-48) % 10;
		}
		if (b == 0) {
			cout << "Tak" << endl;
		}
		else {
			cout << "Nie" << endl;
		}
	}
	
	return 0;
	}	
