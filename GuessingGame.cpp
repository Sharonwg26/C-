/*****************************************
* Assignment 6
* Name: �ΰa�A
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include <iostream> //�ޥΨ��
#include <cstdlib> //�ޥΨ��
#include <ctime> //�ޥΨ��
using namespace std;

int main(){ //�D�{��
	int Ans,MaxHP=0,HP,guess,min=0,max=100,i=0,x,y; //�]�w�U���ܼơA�P�d��_�l
	srand(time(NULL)); // ���@�Ӯɶ����
	cout <<"The answer number is : "; //��X�y�l
	for (int i=0;i<1;i++){ //�]�w�H���ܼ�
		Ans=rand()%101; //�p�]�w�d��
		cout <<Ans <<"\n"; //��XAns
	}
	cout <<"Set your MaxHP : "; //��X�y�l
    cin  >>MaxHP; //��J
	cout <<"HP : " ;
	for(int x=MaxHP;x>0;x--)
	cout <<"��" ; //��X��
	cout <<"\n\n";
	while (guess!=Ans){//�j��
        i++; //�ܼ�i+1
        cout <<"Please guess a number from " <<min <<" to " <<max <<"\nYour guess : ";
		cin  >> guess; //��J�Ʀr
		HP=MaxHP-i; //�]�wHP
		if(guess==Ans){ //�]�w����
			cout <<"Congratulations! You get the answer in " << i <<" times\n"; //��X�y�l
			break; //���X�j��
		}
		else if(HP==0){ //�]�w����		
			cout <<"HP : ";
			for(int x=HP;x>0;x--)
			cout <<"��" ; //��X��
			for(int y=i;y>0;y--)
			cout <<"�� "; //��X��
			cout <<"\n" ;
			cout <<"Sorry, you die \n"; //��X�y�l
			break; //���X�j��
		}
		else if(guess<min|| guess>max){ //�]�w����d��
			cout <<"Your guess is out of range, please try again.\nHP : " ;//��X�y�l�BHP
			for(int x=HP;x>0;x--)
			cout <<"��" ; //��X��
			for(int y=i;y>0;y--)
			cout <<"�� " ; //��X�� 
			cout <<"\n\n" ;
			continue; //���^�W���j��
		}
		else if(guess>Ans||guess<Ans) { //�]�w����
			cout<<"Wrong answer.\nHP:"; //��X�y�l�BHP
			for(int x=HP;x>0;x--)
			cout <<"��" ; //��X��
			for(int y=i;y>0;y--)
			cout <<"�� " ; //��X��  
			cout <<"\n\n" ;
		(guess>Ans)?max=guess:min=guess; //�ΤT���B�⦡�]�wmax,min
		}
	}
	return 0; //�����{���A�K�K�K
}

