#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, reverse; // 宣告兩個 string 變數 input 和 reverse
    bool is_palindrome = true; // 宣告一個布林變數 is_palindrome，並初始化為 true

    cin >> input; // 讀取輸入字串

    // 將輸入字串反轉存入 reverse 字串中
    for (int i = input.length() - 1; i >= 0; i--)
    {
        reverse[input.length() - 1 - i] = input[i]; // 存入反轉後的字元
    }

    // 檢查反轉後的字串是否與原字串相同
    for (int j = 0; j < input.length(); j++)
    {
        if (input[j] != reverse[j]) // 如果對應的字元不同，則代表不是回文
        {
            is_palindrome = false;
            break;
        }
        else // 否則繼續檢查下一個字元
        {
            is_palindrome = true;
        }
    }

    // 根據 is_palindrome 的值輸出結果
    is_palindrome ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}