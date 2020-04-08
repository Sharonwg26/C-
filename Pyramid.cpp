/*****************************************
* Assignment 4
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include<iostream>
using namespace std;

int main(){
    int i,j; //設定變數
    for(i=1;i<=10;i++){ //設定初始值等於1，控制行數
        for(j=1;j<=2*10-1;j++){ //設定初始值等於1，控制變數      
        if(i+j==10+1||j-i==10-1||i==10) //用if...else設定範圍
            cout <<"*"; //輸出的*
        else if(i+j>=0&&i+j<=10||j-i>=10) //用if...else設定範圍
            cout <<" "; //輸出空格
        else if(i-j<10||i==9) //用if...else設定範圍
            cout <<"\\"; /*輸出的\*/
        }
    cout<<endl; //換行
    }
    return 0; //結束程式，嘿嘿嘿
}


