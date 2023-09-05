#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    bool possible = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int remainingSum = x - numbers[i] - numbers[j];
            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int sum = numbers[left] + numbers[right];
                if (sum == remainingSum) {
                    possible = true;
                    break;
                } else if (sum < remainingSum) {
                    left++;
                } else {
                    right--;
                }
            }

            if (possible) {
                break;
            }
        }
        if (possible) {
            break;
        }
    }

    if (possible) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
