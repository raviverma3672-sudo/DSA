#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {0,0,1,1,2,2,3,8,6,6,6,7,9};
    vector<int> arr2;

    for (int i = 0; i < arr.size(); i++) {
        if (i == arr.size() - 1 || arr[i] != arr[i + 1]) {
            arr2.push_back(arr[i]);
        }
    }

    for (int x : arr2) {
        cout << x << " ";
    }

    return 0;
}
