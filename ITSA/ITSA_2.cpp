#include <iostream> 
#include <math.h> 
using namespace std;

int main() {
    int N, a1, a2, a3; //輸入錢,三種水果單價
    int x;          //應找金額
    int r50, r5, r1;  //找零50,5,1
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);
    if (a1 * 15 + a2 * 20 + a3 * 30 > N) {
        cout << "0";     //如果錢少於金額 輸出0
    }
    else {
        x = N - (a1 * 15 + a2 * 20 + a3 * 30); //x計算找零金額
        if (x >= 50) {           //如果大於50從50開始找
            r50 = floor(x / 50);
            x = x - 50 * r50;
            if (x >= 5) {           //5塊
                r5 = floor(x / 5);
                x = x - 5 * r5;
            }
            else {
                r5 = 0;
            }
            if (x >= 1) {           //1塊
                r1 = floor(x / 1);
                x = x - 1 * r1;
            }
            else {
                r1 = 0;
            }
            cout << r1 << "," << r5 << "," << r50; //輸出應找數量
        }
    }
    return 0;
}