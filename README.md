                                                            題目5. 十進制轉二進制

問題描述：
    撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

輸入說明：
    輸入一個整數，介於-128～127之間。

輸出說明：
    以8位元的二進制顯示。

範例：

輸入範例:
        15
        -2

輸出範例:
    00001111
    11111110

解答:

    #include <iostream>
    #include <bitset>
    using namespace std;

    int main()
    {
        int num;
        cin >> num;
        if(num >= -128 && num <= 127){
        bitset<8> binary(num);
        cout << binary << endl;
    }
        return 0;
    }
