#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int m, n;
    cin >> m >> n;
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    str1 = "0" + str1;
    str2 = "0" + str2;
    int **c = new int*[m+1];
    for(int i = 0; i <= m; i++)
    {
        c[i] = new int[n];
    }

    for(int i = 0; i <= m; i++) c[i][0] = 0;
    for(int i = 0; i <= n; i++) c[0][i] = 0;
    for(int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            if(str1[i] == str2[j])
                c[i][j] = c[i-1][j-1]+1;
            else if (c[i-1][j]>=c[i][j-1])
                c[i][j] = c[i-1][j];
            else
                c[i][j] = c[i][j-1];
        }
    
    cout << m+n- 2* c[m][n] << endl;

    return 0;
}