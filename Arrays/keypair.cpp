#include <iostream>
using namespace std;

int main() {
    int target;
    cout << "Enter target element: ";
    cin >> target;

    int arr[] = {5, 4, 7, 9, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
};
 