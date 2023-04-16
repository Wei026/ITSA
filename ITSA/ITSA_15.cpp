#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    // 統計單詞數量
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            count++;
        }
    }
    cout << count << endl;

    // 統計字母數量
    int freq[26] = { 0 }; // 頻率表，初始值全為 0
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            freq[tolower(s[i]) - 'a']++; // 計算字母出現次數
        }
    }

    // 輸出結果
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char c = i + 'a';
            cout << c << " : " << freq[i] << endl;
        }
    }

    return 0;
}