#include<iostream>
using namespace std;

int gcd(int x,int y){ //設定gcd變數
	if(x!=0&&y!=0) //設定範圍
	return gcd((x>=y)?x%y:x,(x<y)?y%x:y); //用三元運算式計算GCD
	else return(x!=0)?x:y;
}

int lcm(int x,int y){ //設定lcm變數
	return x*y/gcd(x,y); //計算lcm
}

int main(){
	int choose,number1,number2,result; //設定變數
	cout <<"(1) Find Greatest Common Divisor of two number.\n(2) Find Lowest Common Multipe.\n(0) Quit the Progeam.\nInput the number to choose:"; //顯示choose
		cin  >>choose; //輸入choose
		if(choose==0||choose>=3) //設定choose範圍
		return 0; //結束程式，嘿嘿嘿
		cout <<"Input two number: "; //輸出句子
		cin  >>number1; //輸入number1
		cin  >>number2; //輸入number2
    if(choose==1) //設定choose=1
    cout <<"Result: " <<gcd(number1,number2) <<"\n"; //輸出句子並運算
    else if(choose==2) //設定choose=2
	cout <<"Result: " <<(number1*number2)/gcd(number1,number2) <<"\n"; //輸出句子並運算
	cout <<"================== \n"; //輸出=====
	return main();
}

