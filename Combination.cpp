#include <iostream>
using namespace std;

int a(int n,int r){
		return (r==0||n==r)?1:(a(n-1,r-1) + a(n-1,r)); //計算C n取r
}
int main(){
	int num1=0,num2=0;//定義=0
    cout <<"Please key in first number : "; //輸出句子
	cin  >>num1; //輸出
	if(num1==0)
		return 0;//結束程式，嘿嘿嘿
	cout <<"Please key in second number : "; //輸出句子
	cin  >>num2;
	cout <<a(num1,num2); //輸出值
	cout <<"\n==========================\n";
	return main(); //回主程式懶得寫迴圈，嘿嘿嘿
}


