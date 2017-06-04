// 2017-6-4

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s1, s2;

    while (cin >> s1 >> s2) {
        int i = 0, j = 0;
        int n1 = s1.size();
        int n2 = s2.size();
        while(i < n1 && j < n2) {
            cout << s1[i++];
            cout << s2[j++];

        }
        while(i < n1) cout << s1[i++];
        while (j < n2) cout << s2[j++];
        cout << endl;
    }
    return 0;
}
