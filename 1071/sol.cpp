// 2017-6-5

#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n) {
        if (n == 0)      cout << "1" << endl;
        else if (n == 1) cout << "0" << endl;
        else if (n % 2 == 1) {
            cout << "4";
            for (int i = 1; i <= n/2; i++) {
                cout << "8";
            }
            cout << endl;
        }
        else{
            for (int i = 1; i <= n/2; i++) {
                cout << "8";
            }
            cout << endl;
        }
    }
    return 0;
}
