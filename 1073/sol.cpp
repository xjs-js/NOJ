// 2017-6-2

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;


struct Student{
    string id;
    int grade;
};

Student s[100];

bool cmp(Student s1, Student s2)
{
    return s1.grade > s2.grade;
}


int main()
{
    int T;
    int n;
    cin >> T;
    
    for (int i = 1; i <= T; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> s[j].id;
            cin >> s[j].grade;
        }
        stable_sort(s, s+n, cmp);
        
        printf("Case %d:\n", i);
        
        for (int k = 0; k < n; k++){
            cout << (k+1) << ' ' << s[k].id << ' ' << s[k].grade;
            cout << endl;
        }
    }
}

