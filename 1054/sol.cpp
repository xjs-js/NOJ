// 2017-6-2

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    char c1, c2;
    int n = s.size();
    for (int i = 0; i < n/2; i++) {
        c1 = s[i];
        c2 = s[n - 1 - i];
        if (c1 >= 'A' && c1 <= 'Z')
            c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z')
            c2 += 32;
        if (c1 != c2)
            return false;
    }
    return true;
}

int main()
{
    string s;
    while (cin >> s) {
        if (isPalindrome(s))
            cout << "Bingle! Palindrome." << endl;
        else
            cout << "Not Palindrome." << endl;
    }
    return 0;
}