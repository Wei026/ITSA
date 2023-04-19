# 題目2. 找零錢問題
### 問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

### 輸入說明：
輸入欲轉換之英哩數(int)。

### 輸出說明：
輸出公里(double)，取到小數點以下第一位。

### 範例：

#### 輸入範例:
90
95

#### 輸出範例:
144.0
152.0

### 解答：
#include <iostream>  
#include <math.h>  
using namespace std;  
  
int main() {  
  int N,a1,a2,a3;  
  int x;  
  int r50,r5,r1;  
  scanf("%d,%d,%d,%d",&N,&a1,&a2,&a3);  
  if (a1*15+a2*20+a3*30>N){  
    cout << "0";  
  }  
  else {  
    x=N-(a1*15+a2*20+a3*30);  
    if(x>=50){  
        r50=floor(x/50);  
        x=x-50*r50;  
      if(x>=5){  
        r5=floor(x/5);  
        x=x-5*r5;  
      } 
      else{ 
        r5=0; 
      } 
      if(x>=1){  
        r1=floor(x/1);  
        x=x-1*r1;  
      }  
      else{ 
        r1=0; 
      } 
      cout << r1<<","<<r5<<","<<r50;  
      }  
    } 
  return 0; 
}  
