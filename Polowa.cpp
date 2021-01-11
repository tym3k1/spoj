#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int j = 0; j < a; j++) {
		string str;
		cin >> str;
		for (int i = 0; i < (str.size() / 2); i++)
			cout << str[i];
		cout << endl;
	}
	return 0;
}