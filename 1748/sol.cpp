// 2017-6-5

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int main()
{
    int N, M;
    double t, sum = 0;
    cin >> N >> M;

    double *dp = new double[N];

    for (int j = 0; j < N; j++)
        cin >> dp[j];

    for (int i = 1; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> t;
            dp[j] = min(dp[j], t);
        }
    }

    for (int j = 0; j < N; j++) {
        sum += dp[j];
    }

    printf("%.2f\n", sum);
    return 0;
}
