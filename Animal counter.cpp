/*****************************************
* Exercise 4
* Name: �ΰa�A
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum animal{cat,dog,bird,fish,rabbit}; //�T�|
int main()
{
	srand(time(NULL)); //�]�w���
	int num1,num2,x; //�]�w�ܼ�
	cout <<"Input the number of cases : "; //��X�y�l
	cin  >>num1; //��Jnum1
	for (int i=0;i<num1;i++){ //�j��	
	int cat1=0,dog1=0,bird1=0,fish1=0,rabbit1=0; //�]�w�ܼ�
	cout <<"Input the number of animals : "; //��X�y�l
	cin  >>num2; //��Jnum2
	for (int i=0;i<num2;i++){ //�]�w�j��
		x=rand()%5; //�����H����
		if(x==cat) cat1++;
		if(x==dog) dog1++;
		if(x==bird) bird1++;
		if(x==fish) fish1++;
		if(x==rabbit) rabbit1++;
		}
		num2=cat1+dog1+bird1+fish1+rabbit1; //�H����ۥ[����num2
    	cout <<"cat:\t" <<cat1 <<"\ndog:\t" <<dog1 <<"\nbird:\t" <<bird1 <<"\nfish:\t" <<fish1 <<"\nrabbit:\t" <<rabbit1 <<"\n\n"; //��X�y�l
	}
	return 0; //�����{���A�K�K�K
}
