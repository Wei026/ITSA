#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b, count;
	int* num;
	count = 0;
	cin >> a >> b;
	num = new int[1LL * a * b];
	for (int i = 0; i < (a * b); i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			count++;
			cout << num[j * b + i];
			if (count % a != 0)
				cout << " ";
		}
		cout << endl;
	}
	delete[]num;
	return 0;
}