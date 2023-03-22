# 題目10. 輾轉相除法

### 問題描述 ：
給定二個正整數，利用輾轉相除法求其最大公因數。

### 輸入說明 ：
給定二個正整數

### 輸出說明 ：
輸出最大公因數

### 範例 ：
#### 輸入範例:
假設輸入為 300 與 250。

#### 輸出範例:
輸出為 50。

### 解答
```
#include <iostream>
using namespace std;

int euc(int a, int b);//輾轉相除法遞迴函式宣告 
int main()
{
	int input = 0, input2 = 0, c = 0;

	cin >> input >> input2;
	if (input < input2)//確認大小順序 
	{
		c = input;
		input = input2;
		input2 = c;
	}
	cout << euc(input, input2) << endl;
	return 0;
}
int euc(int a, int b)
{
	int f = a % b;
	if (f == 0) return b;
	else return euc(b, f);
}
```
