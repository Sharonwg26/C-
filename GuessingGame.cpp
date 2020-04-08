/*****************************************
* Assignment 6
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include <iostream> //引用函數
#include <cstdlib> //引用函數
#include <ctime> //引用函數
using namespace std;

int main(){ //主程式
	int Ans,MaxHP=0,HP,guess,min=0,max=100,i=0,x,y; //設定各個變數，與範圍起始
	srand(time(NULL)); // 給一個時間虛數
	cout <<"The answer number is : "; //輸出句子
	for (int i=0;i<1;i++){ //設定隨機變數
		Ans=rand()%101; //計設定範圍
		cout <<Ans <<"\n"; //輸出Ans
	}
	cout <<"Set your MaxHP : "; //輸出句子
    cin  >>MaxHP; //輸入
	cout <<"HP : " ;
	for(int x=MaxHP;x>0;x--)
	cout <<"＊" ; //輸出＊
	cout <<"\n\n";
	while (guess!=Ans){//迴圈
        i++; //變數i+1
        cout <<"Please guess a number from " <<min <<" to " <<max <<"\nYour guess : ";
		cin  >> guess; //輸入數字
		HP=MaxHP-i; //設定HP
		if(guess==Ans){ //設定條件
			cout <<"Congratulations! You get the answer in " << i <<" times\n"; //輸出句子
			break; //跳出迴圈
		}
		else if(HP==0){ //設定條件		
			cout <<"HP : ";
			for(int x=HP;x>0;x--)
			cout <<"＊" ; //輸出＊
			for(int y=i;y>0;y--)
			cout <<"＿ "; //輸出＿
			cout <<"\n" ;
			cout <<"Sorry, you die \n"; //輸出句子
			break; //跳出迴圈
		}
		else if(guess<min|| guess>max){ //設定條件範圍
			cout <<"Your guess is out of range, please try again.\nHP : " ;//輸出句子、HP
			for(int x=HP;x>0;x--)
			cout <<"＊" ; //輸出＊
			for(int y=i;y>0;y--)
			cout <<"＿ " ; //輸出＿ 
			cout <<"\n\n" ;
			continue; //跳回上面迴圈
		}
		else if(guess>Ans||guess<Ans) { //設定條件
			cout<<"Wrong answer.\nHP:"; //輸出句子、HP
			for(int x=HP;x>0;x--)
			cout <<"＊" ; //輸出＊
			for(int y=i;y>0;y--)
			cout <<"＿ " ; //輸出＿  
			cout <<"\n\n" ;
		(guess>Ans)?max=guess:min=guess; //用三元運算式設定max,min
		}
	}
	return 0; //結束程式，嘿嘿嘿
}

