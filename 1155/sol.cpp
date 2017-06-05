// 2017-6-5

#include <iostream>
#include <cstdio>

double books[100];
using namespace std;

int main()
{
    int N, M;
    double total, price;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> price;
            books[j] = (i == 0) ? price : min(books[j], price);
        }
    }

    for (int i = 0; i < N; i++) {
        total += books[i];
    }

    printf("%.2f", total);

    return 0;
}
