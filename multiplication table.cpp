/*****************************************
* Exercise 2
* Name:��܎��
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/

#include <iostream>
using namespace std;

int main(){
	int i,j; //�O��׃��
    for(i=1;i<10;i++){ //�O����ʼֵ���1������׃��
        for( j=1;j<10;j++){ //�O����ʼֵ���1������׃��
		    int tmp = i*j; //��ˬۭ�
            cout <<i <<"*"<<j; //ݔ��׃���c��̖
			cout <<"=" << tmp <<"\t"; //ݔ������c�𰸮�
        }
        cout <<endl; //�Q��
    }
    return 0; //�Y����ʽ���ٺٺ�
}
