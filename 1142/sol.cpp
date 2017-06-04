// 2017-6-4

#include <cstdio>
#define max(a, b) ((a)>(b)?(a):(b))
int main() {
    int T, n, t;
    int local_max, global_max;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &t);
            if (i == 0)
                local_max = global_max = t;
            else {
                local_max = max(t, local_max + t);
                global_max = max(global_max, local_max);
            }
        }
        printf("%d\n", global_max);
    }
    return 0;
}
