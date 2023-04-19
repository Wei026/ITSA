# 題目22. 圈圈叉叉

### 問題描述 ：

OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?

### 輸入說明 ：

輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。

### 輸出說明 ：

輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。

### 範例 ：

#### 輸入範例

1 0 1  
0 0 1  
1 0 0  

1 0 0  
0 1 1  
0 1 0  
#### 輸出範例

True

False

### 解答
```
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
```
