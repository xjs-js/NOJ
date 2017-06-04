#include <iostream>
#include <algorithm>
using namespace std;

//int f[51][2501];
//int num[51] = {0};
//int weight[51] = {0};
//int main()
//{
//    for (int i = 0; i < 51; i++)
//        f[i][0] = 0;
//    for (int i = 0; i < 2501; i++)
//        f[0][i] = 0;
//    int T, n;
//    cin >> T;
//    while(T--)
//    {
//        cin >> n;
//        int count = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            cin >> num[i];
//            weight[i] = num[i];
//            count += num[i];
//        }
//        sort(num, num + n);
//
//        for(int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= count/2; j++)
//            {
//                if ( j < weight[i])
//                {
//                    f[i][j] = f[i-1][j];
//                }
//                else
//                {
//                    int x = f[i-1][j];
//                    int y = f[i-1][j-weight[i]] + num[i];
//                    f[i][j] = max(x, y);
//                }
//            }
//        }
//
//        int relt = f[n][count/2];
//        cout << min(relt, count - relt) << " " << max(relt, count - relt) << endl;
//    }
//}
int f[100][5000];
int val[100];
int weight[100];

int main()
{
    int T, n;
    int cnt = 0;
    scanf("%d", &T);
    while (T--)
    {
        cnt = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &val[i]);
            weight[i] = val[i];
            cnt += val[i];
        }
        int C = cnt/2;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= C; j++)
            {
                f[i][j] = (i == 1 ? 0 : f[i-1][j]);
                if (j >= val[i]) f[i][j] = max(f[i][j], f[i-1][j-val[i]]+weight[i]);
            }
        }

        int relt1 = f[n][C];
        int relt2 = cnt - relt1;

        printf("%d %d\n", min(relt1, relt2), max(relt1, relt2));
    }

}
