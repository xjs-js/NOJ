#include <iostream>
#define min(a, b) (a < b ? a : b)
using namespace std;

int aux[100000];
int a[100000];

void merge(int lo, int mid, int hi)
{
    int i = lo, j = mid + 1;

    for (int k = lo; k <= hi; k++)
        aux[k] = a[k];

    for (int k = lo; k <= hi; k++)
        if (i > mid)              a[k] = aux[j++];
        else if (j > hi)          a[k] = aux[i++];
        else if (aux[j] < aux[i]) a[k] = aux[j++];
        else                      a[k] = aux[i++];      
}

void sort(int n) {
    for (int sz = 1; sz < n; sz = sz + sz)
        for (int lo = 0; lo < n - sz; lo += (sz + sz))
            merge(lo, lo+sz-1, min(lo+sz+sz-1, n-1));
}

int main() 
{
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
       cin >> a[i];
   sort(n);
   for (int i = 0; i < n; i++){
       cout << a[i];
       if (i != n-1) cout << " ";
   }
}