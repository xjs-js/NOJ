// 2017-6-5

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s += ".";

    // init
    int lo = 0, cnt = 0, index, num;
    string child;

    char relt[100];

    while(s.find(".", lo) != -1) {
        // find the "."
        index = s.find(".", lo);

        // get the substr
        child = s.substr(lo, index - lo);

        // get the num and to binary
        num = atoi(child.c_str());
        itoa(num, relt, 2);

        // print the relt
        cout << relt;

        // print three point
        if (++cnt != 4)
            cout << ".";

        // update lo
        lo = index + 1;
    }
    cout << endl;
    return 0;
}

