#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        int min = 9999, max = -9999;
        for(int i = 0; i < n; i++) {
            int temp; cin >> temp;
            if (temp < min) min = temp;
            if (temp > max) max = temp;
        }
        cout << max << " " << min << endl;
    }
}