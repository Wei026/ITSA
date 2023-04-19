#include<iostream>
#include<iomanip>
#include<math.h>    
using namespace std;

int main() {
    int p, n, a;
    float r;
    float sum = 0.0;
    float x = 0.0;
    cin >> r;
    cin >> n;
    cin >> p;
    a = p;
    for (int i = 0; i < n - 1; i++) {
        sum = p * pow((1 + r), n);
        p += p;
    }

    cout << std::floor(sum + a) << endl;

    return 0;
}