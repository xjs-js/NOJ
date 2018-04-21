#include <iostream>

using namespace std;

int main(void)
{
    int table[7][4] = {
        {0, 0, 0, 0},
        {2, 3, 4, 5},
        {1, 3, 4, 6},
        {1, 2, 5, 6},
        {1, 2, 5, 6},
        {1, 3, 4, 6},
        {2, 3, 4, 5}
    };
    int a, b, c;
    while(cin >> a >> b >> c)
    {
        int relt = 0;
        int count;
       for(int i = 1; i <= 6; i++)
       {
           count = 0;
           
           for(int j = 0; j <= 3; j++)
           {
               if(a == table[i][j]) ++count;
               if(b == table[i][j]) ++count;
               if(c == table[i][j]) ++count;
           }
           if (count >= 3)
            {
                relt = i;
                break;
            }
       } 
       cout << relt << endl;
    }
}