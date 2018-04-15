#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    int N;
    int maxNum;
    int t = 0;
    cin >> N;
    while(N--)
    {
        cin >> a >> b >> c;
        maxNum = a > b ? a : b;
        maxNum = maxNum > c ? maxNum : c;

        t = (maxNum-a) + (maxNum-b) + (maxNum-c);
        if(t % 2 == 0)
            cout << t/2 << endl;
        else
            cout << (t+1)/2+1 << endl;
    }
    return 0;
}