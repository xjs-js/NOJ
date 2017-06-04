// 2017-6-2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    int n, m;
    int *nums;
    cin >> T;
    for (int i = 0; i < T; i ++)
    {
        cin >> n;
        nums = new int[n];
        vector<int> odd;
        for (int j = 0; j < n; j++)
        {
            cin >> nums[j];
            if (nums[j] % 2 == 1)
                odd.push_back(nums[j]);
        }
        sort(odd.begin(), odd.end());
        int index = 0;
        cout << "Case " << i+1 << ":" << endl;
        for (int j = 0; j < n; j++) {
            if (nums[j] % 2 == 0)
                cout << nums[j];
            if (nums[j] % 2 == 1)
                cout << odd[index++];
            if (j != n - 1)
                cout << " ";
            else
                cout << endl;
        }

    }
}