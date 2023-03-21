#include <iostream>
#include <iomanip> // 為了輸出虛數時固定小數點位數

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char op;
        double a1, b1, a2, b2;
        cin >> op >> a1 >> b1 >> a2 >> b2;

        double result_a = 0, result_b = 0; // 運算結果

        // 依照題目要求進行虛數運算
        switch (op) {
        case '+':
            result_a = a1 + a2;
            result_b = b1 + b2;
            break;
        case '-':
            result_a = a1 - a2;
            result_b = b1 - b2;
            break;
        case '*':
            result_a = a1 * a2 - b1 * b2;
            result_b = a1 * b2 + a2 * b1;
            break;
        }

        // 輸出虛數結果，並固定小數點位數為0
        cout << fixed << setprecision(0) << result_a << " ";
        cout << fixed << setprecision(0) << result_b << endl;
    }

    return 0;
}