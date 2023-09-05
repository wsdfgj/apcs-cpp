#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    double b;
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> b;
        bool isPrime = true;
        for (int j = 2; j <= sqrt(b); j++) {  // 使用 j <= sqrt(b)
            if (fmod(b, j) == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime && b > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
