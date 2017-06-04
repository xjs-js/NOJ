// 2017-6-2

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    int n;
    for (int i = 0; i < s.size(); i++){
        n = s[i]- '0';
        sum += n;
    }
    cout << sum << endl;
    return 0;
}