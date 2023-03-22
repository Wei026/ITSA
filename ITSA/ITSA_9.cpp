#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N, i, sum = 0;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        if (i % 3 == 0)     //找最近的3的倍數
            sum += i;
    }
    cout << sum << endl;//得到總和

    return 0;
}