#include <iostream>
using namespace std;

int a(int n,int r){
		return (r==0||n==r)?1:(a(n-1,r-1) + a(n-1,r)); //�p��C n��r
}
int main(){
	int num1=0,num2=0;//�w�q=0
    cout <<"Please key in first number : "; //��X�y�l
	cin  >>num1; //��X
	if(num1==0)
		return 0;//�����{���A�K�K�K
	cout <<"Please key in second number : "; //��X�y�l
	cin  >>num2;
	cout <<a(num1,num2); //��X��
	cout <<"\n==========================\n";
	return main(); //�^�D�{���i�o�g�j��A�K�K�K
}


