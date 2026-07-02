#include <iostream>
#include <algorithm>
using namespace std;

void addStrings(string &s1, string &s2, int i, int j, int carry, string &ans)
{
    // Base case
    if (i < 0 && j < 0 && carry == 0)
        return;

    int d1 = 0, d2 = 0;

    if (i >= 0)
        d1 = s1[i] - '0';

    if (j >= 0)
        d2 = s2[j] - '0';

    int sum = d1 + d2 + carry;

    carry = sum / 10;
    int digit = sum % 10;

    ans.push_back(digit + '0');

    addStrings(s1, s2, i - 1, j - 1, carry, ans);
}

string add(string s1, string s2)
{
    string ans = "";

    addStrings(s1, s2, s1.size() - 1, s2.size() - 1, 0, ans);

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string s1, s2;

    cout << "Enter first number: ";
    cin >> s1;

    cout << "Enter second number: ";
    cin >> s2;

    cout << "Sum = " << add(s1, s2);

    return 0;
}