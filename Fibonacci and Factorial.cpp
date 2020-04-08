/*****************************************
* Exercise 3
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include <iostream>
using namespace std;

int Fibonacci(int n){
	return n>2?(Fibonacci(n-1)+Fibonacci(n-2)):1; //用三元運算式計算 (太多if..else 麻煩)
}
int Factorial(int n, int tmp){
	return n>1?Factorial(n-1, tmp*n):tmp; //用三元運算式計算 (太多if..else 麻煩)
}

int main(){
	int num;  //設定變數
	cout <<"Input a number: "; //顯示句子
	cin  >>num;
	if(num==0)
	return 0;
	cout <<"Fibonacci of " <<num <<": " <<Fibonacci(num) <<"\n"; //顯示句子並輸出數值
	cout <<"Factorial of " <<num <<": " <<Factorial(num) <<"\n"; //顯示句子並輸出數值
	cout <<"=============\n"; //輸出===
	return main(); //結束程式，嘿嘿嘿
}


