// 2017-6-2

#include <iostream>
#include <math.h>
using namespace std;



int main() {
    int n;
    int sum = 0;
    
    cin >> n;
    int end = int(sqrt(n));

    for (int i = 1; i <= end; i++) {
        if (n % i == 0) {
            sum += (i + n / i);
        }
    }

    if (end * end == n)
        sum -= end;
    
    cout << sum << endl;
}