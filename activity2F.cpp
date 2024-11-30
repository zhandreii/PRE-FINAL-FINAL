#include <iostream>
using namespace std;

int main() {
	char symbol;
	cout << "Enter symbol: ";
	cin >> symbol;
	for (int i = 0; i < 8; i++) {
		for (int f = 0; f < i; f++) {
			cout << " " << symbol;
		}
		cout << " ";
		for (int f = i + 1; f < 8; f++) {
			cout << " " << symbol;
		}
		cout << endl;
	}
}