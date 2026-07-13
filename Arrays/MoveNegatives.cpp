// arr={1,2,4,-4,-5,6,0}
//output={-4,-5,1,2,4,6,0}

#include <iostream>
#include <vector>
using namespace std;

void MoveNegatives(vector<int>& arr) {
    int i = 0;
    int j = arr.size() - 1;

    while (i <= j) {
        if (arr[i] < 0) {
            i++;
        }
        else if (arr[j] >= 0) {
            j--;
        }
        else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> arr = {-1, 2, 4, 5, -8, -2, -1, 0};

    MoveNegatives(arr);

    for (auto x : arr) {
        cout << x << " ";
    }
}