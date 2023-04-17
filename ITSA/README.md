引用了 <iostream> 和 <iomanip> 這兩個標頭檔。

宣告了一個 double 型態的陣列 numbers，可以用來存放輸入的十個數字。

宣告了兩個 double 型態的變數 max_num 和 min_num，用來分別存放最大值和最小值。

使用 for 迴圈讀取輸入的十個數字，並且在讀取每一個數字之後，利用 if 條件判斷來比較當前數字和 max_num、min_num 的大小，以更新最大值和最小值。

最後，使用 cout 輸出最大值和最小值，並使用 fixed 和 setprecision 來設定小數點後的位數為 2。