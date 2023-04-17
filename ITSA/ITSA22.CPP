#include <iostream> 
using namespace std; 

int main() { 
    int input[3][3]; 

    // 讀入輸入的矩陣 
    for(int i = 0; i < 3; i++) { 
        for(int j = 0; j < 3; j++) { 
            cin >> input[i][j]; 
        } 
    } 

    // 判斷是否贏了 
    bool win = false; 
    for(int i = 0; i < 3; i++) { 
        if(input[i][0] == input[i][1] && 
           input[i][1] == input[i][2]) { 
            win = true; 
        } 
        if(input[0][i] == input[1][i] && 
           input[1][i] == input[2][i]) { 
            win = true; 
        } 
    } 
    if(input[0][0] == input[1][1] && 
       input[1][1] == input[2][2]) { 
        win = true; 
    } 
    if(input[0][2] == input[1][1] && 
       input[1][1] == input[2][0]) { 
        win = true; 
    } 

    // 輸出結果 
    if(win) { 
        cout << "True" << endl; 
    } 
    else { 
        cout << "False" << endl; 
    } 

    return 0; 
} 
