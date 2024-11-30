#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 9; i++) {
		for (int b = i + 1; b < 9; ++b) {
			cout << " * ";
		}
		cout << endl;
	}
}