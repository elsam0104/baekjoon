#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
	vector<int> v;
	vector<char> oper;
	string str;
	cin >> str;
	int temp = 0, t = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))//is number
		{
			if (str[i] != '0')
				temp += (str[i] - '0') * pow(10, t++);
			else
				temp *= pow(10, t++);
		}
		else
		{
			t = 0;
			v.push_back(temp);
			temp = 0;
			oper.push_back(str[i]);
		}
	}

	if (temp != 0)
		v.push_back(temp);

	bool isPlusAll = true;
	/*for (int i = 0; i < oper.size(); i++)
	{
		if (oper[i] == '-')
		{
			isPlusAll = false;
			break;
		}
	}
	temp = 0;
	if (isPlusAll)
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (oper[i] = '+')
				temp += v[i];
		}
	}
	else
	{*/
		int i = 0;
		bool isMin = false;
		while (oper.empty() == false)
		{
			if (oper[i] == '-')
			{
				if (isMin = false)
				{
					temp += v[i];
				}d
			}
			else
			{

			}
		//}
	}

	return 0;
}