### 題目17. 英文斷詞

### 問題描述 ：

斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。

### 輸入說明 ：

輸入一句英文敘述句。 字元數≤1000。

### 輸出說明 ：

將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。

### 範例 ：

#### 輸入範例

How do you do

#### 輸出範例

how do you

### 解答
```
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
	string input, save;
	vector<string> count;

	getline(cin, input);
	istringstream cutStr(input);
	while (getline(cutStr, save, ' '))
	{
		for (int j = 0; j < save.length(); j++)
		{
			save[j] = tolower(save[j]);
		}
		count.push_back(save);
	}//將讀入的整行字串拆解並讀入 
	for (int i = count.size() - 1; i > 0; i--)//從尾開始往前尋找重複的並移除 
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (count[i] == count[j]) { count.erase(count.begin() + i); break; }
		}
	}
	for (int i = 0; i < count.size(); i++)//整理後依序輸出 
	{
		if (i == count.size() - 1)cout << count[i] << endl;
		else cout << count[i] << " ";
	}
	return 0;
}
```
