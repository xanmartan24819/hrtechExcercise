#include <bits/stdc++.h>
using namespace std;
bool check(int num)
{
	if (num <= 0)
	{
		return true;
	}
	else if (num % 10 != 4 && num % 10 != 7) 
	{
		return false;
	}
	else return check((int) num / 10);
}
int main()
{
	int num;
	cin >> num;
	if (check(num))
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}
}
