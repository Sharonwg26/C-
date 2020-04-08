/*****************************************
* Assignment 3
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c,s,area,check; //設定變數 
    cout<<"Please key in first number:\n"; //顯示句子
    cin >>a; //輸入變數a 
    cout<<"Please key in second number:\n"; //顯示句子
    cin >>b; //輸入變數b
    cout<<"Please key in third number:\n"; //顯示句子
    cin >>c; //輸入變數c

    s=(a+b+c)/2; //算周長除以二 
    check=sqrt(s*(s-a)*(s-b)*(s-c)); //用海龍公式算面積 

    if (check <0) //如果面積小於0 
        cout<<"Total area = 0\n"; //顯示句子
    else{
        area =(check);  
        cout<<"Total area = " <<check <<endl; //顯示結果 
    }
   if(a+b>c&&c+a>b&&c+b>a){ //用三角公式判斷 
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) //用三角公式判斷  
            cout<<(a==b||a==c||b==c)?"Isosceles right triangle\n":"Right triangle\n"; //顯示句子
		else if (a==b==c) //用三角公式判斷  
                cout<<"Regular triangle\n"; //顯示句子
            else if(a==b&&a==c&&b==c) //用三角公式判斷  
                cout<<"Isosceles triangle\n"; //顯示句子
        else
            cout<<"Triangle\n"; //顯示句子
	}

    else
        cout << "Not triangle\n"; //顯示句子 
    system("pause"); //暫停執行 
    return 0; //結束程式，嘿嘿嘿
}






