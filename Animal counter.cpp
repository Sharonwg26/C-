#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum animal{cat,dog,bird,fish,rabbit}; //枚舉
int main()
{
	srand(time(NULL)); //設定虛數
	int num1,num2,x; //設定變數
	cout <<"Input the number of cases : "; //輸出句子
	cin  >>num1; //輸入num1
	for (int i=0;i<num1;i++){ //迴圈	
	int cat1=0,dog1=0,bird1=0,fish1=0,rabbit1=0; //設定變數
	cout <<"Input the number of animals : "; //輸出句子
	cin  >>num2; //輸入num2
	for (int i=0;i<num2;i++){ //設定迴圈
		x=rand()%5; //產生隨機數
		if(x==cat) cat1++;
		if(x==dog) dog1++;
		if(x==bird) bird1++;
		if(x==fish) fish1++;
		if(x==rabbit) rabbit1++;
		}
		num2=cat1+dog1+bird1+fish1+rabbit1; //隨機樹相加等於num2
    	cout <<"cat:\t" <<cat1 <<"\ndog:\t" <<dog1 <<"\nbird:\t" <<bird1 <<"\nfish:\t" <<fish1 <<"\nrabbit:\t" <<rabbit1 <<"\n\n"; //輸出句子
	}
	return 0; //結束程式，嘿嘿嘿
}
