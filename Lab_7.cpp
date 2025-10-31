#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter The Number: ";
    cin >> a;

    if (a == 1) {
        cout << "1 is not a prime number." << endl;
        return 0;
    }

    bool isprime = true;  // ← Missing semicolon fixed

    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            cout << a << " is not a prime number." << endl;
            isprime = false;
            break;
        }
    }

    if (isprime) {
        cout << a << " is a prime number." << endl;
    }

    return 0;
}