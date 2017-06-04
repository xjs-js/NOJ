// 2017-6-5

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    while ((cin >> a >> b) && (a || b)) {
        bool isFirst = true;
        for (int r = 0; r <= 99; r++) {
            if ((a*100 + r) % b == 0) {
                if (isFirst) {
                    printf("%02d", r);
                    isFirst = false;
                } else {
                    printf(" %02d", r);
                }
            }
        }
        cout << endl;
    }

    return 0;
}
