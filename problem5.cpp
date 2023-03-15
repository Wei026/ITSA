#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num >= -128 && num <= 127){

    bitset<8> binary(num);

    cout << binary << endl;
}
    return 0;
}