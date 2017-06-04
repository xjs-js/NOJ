// 2017-6-3

#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    string nums;
    cin >> nums;
    int n = nums.size();
    int odd = nums[n-1] - '0';
    int t;
    for (int i = 0; i < n; i++) {
        t = nums[i] - '0';
        if (t % 2 == 0 && odd > t) {
            swap(nums[i], nums[n-1]);
            break;
        }
    }

    if ((nums[n-1] - '0') % 2 == 0) {
        cout << nums << endl;
        return 0;
    }

    for (int i = n - 1; i >= 0; i--) {
        t = nums[i] - '0';
        if(t % 2 == 0) {
            swap(nums[i], nums[n - 1]);
            break;
        }
    }

    if ((nums[n-1] - '0') % 2 == 0 )
        cout << nums << endl;
    else
        cout << -1 << endl;
    return 0;
}