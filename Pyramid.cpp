/*****************************************
* Assignment 4
* Name: �ΰa�A
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include<iostream>
using namespace std;

int main(){
    int i,j; //�]�w�ܼ�
    for(i=1;i<=10;i++){ //�]�w��l�ȵ���1�A������
        for(j=1;j<=2*10-1;j++){ //�]�w��l�ȵ���1�A�����ܼ�      
        if(i+j==10+1||j-i==10-1||i==10) //��if...else�]�w�d��
            cout <<"*"; //��X��*
        else if(i+j>=0&&i+j<=10||j-i>=10) //��if...else�]�w�d��
            cout <<" "; //��X�Ů�
        else if(i-j<10||i==9) //��if...else�]�w�d��
            cout <<"\\"; /*��X��\*/
        }
    cout<<endl; //����
    }
    return 0; //�����{���A�K�K�K
}


