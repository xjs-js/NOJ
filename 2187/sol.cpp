#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
	string a, b;
	cin >> a >> b;
	int num[26] = {0};
	
	for (int i=0; i < a.length(); i++)
	{
		num[a[i] - 'a']++;
	}
	
	for (int i=0; i < b.length(); i++)
	{
		num[b[i] - 'a']--;
	}
	
	int relt = 0;
	for (int i=0; i <= 25; i++)
	{
		relt += abs(num[i]);
	}
	
	cout << relt << endl;
}
