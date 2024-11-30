#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 8; i++) {
        for (int d = i; d >= 1; d--) {
            cout << d << " ";
        }
        cout << endl;
    }
    return 0;
}