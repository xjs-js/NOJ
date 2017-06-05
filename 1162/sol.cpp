// 2017-6-5

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    int N;
    double P = 0, Q = 0;
    cin >> N;
    int *nums = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) P += nums[i-1];
        else            Q += nums[i-1];
    }

    cout << (int)abs(P - Q) << endl;

    return 0;
}
