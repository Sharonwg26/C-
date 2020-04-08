/*****************************************
* Exercise 2
* Name:翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include <iostream>
using namespace std;

int main(){
	int i,j; //設定變數
    for(i=1;i<10;i++){ //設定初始值等於1，控制變數
        for( j=1;j<10;j++){ //設定初始值等於1，控制變數
		    int tmp = i*j; //相乘
            cout <<i <<"*"<<j; //輸出變數與乘號
			cout <<"=" << tmp <<"\t"; //輸出等於與答案
        }
        cout <<endl; //換行
    }
    return 0; //結束程式，嘿嘿嘿
}
