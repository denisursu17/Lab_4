#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Enter A and B (A < B): ";
    cin >> A >> B;

    if (A >= B) {
        cout << "Error: A must be less than B!";
        return 0;
    }

    cout << "Round numbers: ";

    for (int i = A; i <= B; i++) {
        if (i % 10 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
