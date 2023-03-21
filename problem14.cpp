#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b;
    string str;
    while (getline(cin,str))
	{
        b = 1;
        a = str.length();
        for(int i = 0;i < a / 2; i++)
	    {
            if (str[i] != str[a - i - 1])
	        {
                b = 0;
                break;
            }       
        }
        if (b == 1)
	    {
            cout << "YES";       
        }
	    else
	    {
            cout << "NO";     
        }
        cout << endl;         
    }
    return 0;
}