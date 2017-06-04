// 2017-6-5

#include <cstdio>

int main()
{
    int M;
    while (scanf("%d", &M) != -1) {
        for(int i = 1; i <= M*3; i++) {
            for(int j = 1; j <= M; j++) {
                printf("XHU");
            }
            printf("\n");
        }
    }

    return 0;
}
