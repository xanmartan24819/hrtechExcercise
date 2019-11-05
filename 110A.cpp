#include <bits/stdc++.h>
using namespace std;
bool checkNum(int n)
{
	if (n <= 0)
	{
		return true;
	}
	else if (n % 10 != 4 && n % 10 != 7)
	{
		return false;
	}
	else
	{
		return checkNum((int) n / 10);
	}
}
int main()
{
	string number;
	cin >> number;
	int count = 0;
	for (int i = 0; i < number.length(); i++)
	{
		if (number[i] == '4' || number[i] == '7')
		{
			count++;
		}
	}
	if (count != 0 && checkNum(count))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
