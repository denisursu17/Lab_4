#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Enter A, B, C: ";
    cin >> A >> B >> C;

    bool result = (A > B && B > C);

    cout << boolalpha;
    cout << "Result: " << result << endl;

    return 0;
}
