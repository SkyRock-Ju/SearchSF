#include <iostream>
#include <string>

using namespace std;
bool IsKPeriodic(string str, int K)
{
	if ((str.size() % K || (str.size() == K)) > 0)
	{
		return false;
	}

	for (int i = 0; i < str.size() - K; i+=K)
	{
		int j = 0;
		int num = i;
		while (j != K)
		{
			if (str[num] != str[num + K])
			{
				return false;
			}
			j++;
			num++;
		}
	}
	return true;
}


int main()
{
	string string = "abc";
	if (IsKPeriodic(string,3))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}