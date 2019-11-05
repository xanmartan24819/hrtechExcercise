#include <bits/stdc++.h>
using namespace std;
bool checkCap(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}
void reverse(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 'a' - 'A';
		}
		else
		{
			str[i] = str[i] + 'A' - 'a';
		}
	}
}
int main()
{
	string word;
	cin >> word;
	if (!checkCap(word[0]))
	{
		int check = 0;
		for (int i = 1; i < word.length(); i++)
		{
			if (checkCap(word[i]))
			{
				check++;
			}
		}
		if (check == word.length() - 1)
		{
			reverse(word);
			cout << word;
		}
		else
		{
			cout << word;
		}
	}
	else
	{
		int check = 0;
		for (int i = 0; i < word.length(); i++)
		{
			if (!checkCap(word[i]))
			{
				cout << word;
				return 0;
			}
		}
		reverse(word);
		cout << word;
	}
}
