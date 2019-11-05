#include <bits/stdc++.h>
using namespace std;

int main()
{
	int groupNumber, i, j;
	cin >> groupNumber;
	int group[groupNumber + 1];
	int student[5] = {};
	for (i = 1; i <= groupNumber; i++)
	{
		cin >> group[i];
		student[group[i]]++;
	}
	int car = student[4];
	car += (int) student[2] / 2;
	student[2] = (student[2] % 2 == 0) ? 0 : 1;
	if (student[3] > student[1])
	{
		car = car + student[3] + student[2];
	}
	else
	{
		car += student[3];
		student[1] -= student[3];
		int temp = student[1] + student[2] * 2;
		car += (int)temp / 4;
		car = (temp % 4 == 0) ? car : (car + 1);
	}
	cout << car;
}
