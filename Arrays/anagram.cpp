#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter two strings: ";
    cin >> s1 >> s2;

    if (strlen(s1) != strlen(s2)) {
        cout << "Not a valid anagram";
        return 0;
    }

    sort(s1, s1 + strlen(s1));
    sort(s2, s2 + strlen(s2));

    if (strcmp(s1, s2) == 0)
        cout << "Valid anagram";
    else
        cout << "Not a valid anagram";

    return 0;
}
