// 2017-6-2

#include <iostream>
using namespace std;

int nums[10001];
int main()
{
    int T;
    int n, target;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        
        cin >> target;
        
        int start = 0, end = n - 1;
        int mid;
        while (start <= end) {
            mid = (start + end) / 2;
            if (nums[mid] < target) start = mid + 1;
            else if (nums[mid] > target) end = mid - 1;
            else break;
        }

        if (nums[mid] == target)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
    return 0;
}