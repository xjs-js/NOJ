// 2017-6-3

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    for(int k = 0; k < 3; k++)
    {
        if (k == 0) {
            cin >> n;
            vector<int> lists;
            int t;
            for (int i = 0; i < n; i++) {
                cin >> t;
                lists.push_back(t);
            }

            int target;
            cin >> target;

            for (int i = n-1; i >= 0; i--) {
                cout << lists[i] << ' ';
            }
            cout << endl;

            for (int i = n-1; i >= 0; i--) {
                if (lists[i] != target)
                    cout << lists[i] << ' ';
            }
            cout << endl;
        }
        if (k == 1) {
            cin >> n;
            vector<char> lists;
            char t;
            for (int i = 0; i < n; i++) {
                cin >> t;
                lists.push_back(t);
            }

            char target;
            cin >> target;

            for (int i = n-1; i >= 0; i--) {
                cout << lists[i] << ' ';
            }
            cout << endl;

            for (int i = n-1; i >= 0; i--) {
                if (lists[i] != target)
                    cout << lists[i] << ' ';
            }
            cout << endl;
        }
        if (k == 2) {
            cin >> n;
            vector<double> lists;
            double t;
            for (int i = 0; i < n; i++) {
                cin >> t;
                lists.push_back(t);
            }

            double target;
            cin >> target;

            for (int i = n-1; i >= 0; i--) {
                cout << lists[i] << ' ';
            }
            cout << endl;

            for (int i = n-1; i >= 0; i--) {
                if (lists[i] != target)
                    cout << lists[i] << ' ';
            }
            cout << endl;
        }

    }
    return 0;
}