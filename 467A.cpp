#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int peo[num + 1], room[num + 1];
	for (int i = 1; i <= num; i++)
	{
		cin >> peo[i] >> room[i];
	}
	int check = 0;
	for (int i = 1; i <= num; i++)
	{
		if (room[i] - peo[i] >= 2)
		{
			check ++;
		}
	}
	cout << check;
}
