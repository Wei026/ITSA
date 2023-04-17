#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numbers[10];
    double max_num, min_num;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        if (i==0){
            max_num = numbers[i];
            min_num = numbers[i];
        }
        else
        {
            if (numbers[i] > max_num) {
                max_num = numbers[i];
        }
            if (numbers[i] < min_num) {
                min_num = numbers[i];
        }
    }
    }
    cout << fixed << setprecision(2) << "maximum:" << max_num << endl;  
    cout << fixed << setprecision(2) << "minimum:" << min_num << endl; 
    return 0;
}
