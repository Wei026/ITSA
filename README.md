# 題目18. QWERTY

### 問題描述 ：

輸入一段文字 ( 限制為 ASCII 表中，編號 32 至 125 之字元 ) ，將它們每個字元依照鍵盤的位置，印出它們右邊的字元，若右邊按鍵有兩層字元 ( 如 : 和 ; 位於同一按鍵上 ) ，則輸出下層字元，即 ”;” ，若該按鍵為上層字元 ( 如 !) 則輸出其右邊按鍵之上層字元 ( 如 @) ，若輸入的字元右邊的鍵為不可視按鍵，如 shift, enter,backspace 或右邊已無按鍵，如不做更動，照樣輸出。
### 輸入說明 ：

輸入一行鍵盤上屬於 ASCII 表中編號 32 至 125 之字元，並以 enter 結束該行。

### 輸出說明 ：

輸出該行每個字元右邊位置的文字，除題目所述之例外字元除外。
最後必須有換行

### 範例 ：
#### Sample Input:

Qwer
Adjg
ehn6

#### Sample Output:

wert
sfhk
rjm7

### 解答
```
#include <iostream>
#include<string.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    string a = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";
    int len = input.size();
    int lena = a.size();
    for (int i = 0;i < len;i++)
    {
        for (int j = 0;j < lena;j++)
        {
            if (input[i] == ' ')
            {
                input[i] = ' ';
                break;
            }
            else if (input[i] == a[j])
            {
                input[i] = a[j + 1];
                break;
            }
        }
        cout << input[i];
    }
    cout << endl;
    return 0;
}
```
