/*****************************************
* Assignment 3
* Name: �ΰa�A
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c,s,area,check; //�]�w�ܼ� 
    cout<<"Please key in first number:\n"; //��ܥy�l
    cin >>a; //��J�ܼ�a 
    cout<<"Please key in second number:\n"; //��ܥy�l
    cin >>b; //��J�ܼ�b
    cout<<"Please key in third number:\n"; //��ܥy�l
    cin >>c; //��J�ܼ�c

    s=(a+b+c)/2; //��P�����H�G 
    check=sqrt(s*(s-a)*(s-b)*(s-c)); //�ή��s�����⭱�n 

    if (check <0) //�p�G���n�p��0 
        cout<<"Total area = 0\n"; //��ܥy�l
    else{
        area =(check);  
        cout<<"Total area = " <<check <<endl; //��ܵ��G 
    }
   if(a+b>c&&c+a>b&&c+b>a){ //�ΤT�������P�_ 
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) //�ΤT�������P�_  
            cout<<(a==b||a==c||b==c)?"Isosceles right triangle\n":"Right triangle\n"; //��ܥy�l
		else if (a==b==c) //�ΤT�������P�_  
                cout<<"Regular triangle\n"; //��ܥy�l
            else if(a==b&&a==c&&b==c) //�ΤT�������P�_  
                cout<<"Isosceles triangle\n"; //��ܥy�l
        else
            cout<<"Triangle\n"; //��ܥy�l
	}

    else
        cout << "Not triangle\n"; //��ܥy�l 
    system("pause"); //�Ȱ����� 
    return 0; //�����{���A�K�K�K
}






