#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 8; i++) {
        for (int c = 0; c < i; c++) {
            cout << "  ";
        }
        for (int c = i + 1; c < 8; c++) {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}