/*****************************************
* Exercise 7 
* Name: �ΰa�A
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include<iostream>
#include <string>
using namespace std;

int main(){
	int num=0,i=0,e=0; //��l�� 
	cin >>num; //��J 
	string sentence;
	getline(cin,sentence);  
	for (e=num;e>0;e--){ //�j�� 
	getline(cin,sentence);
    	for(i=0;i<sentence.length();i++){
    		if((sentence[i]>='A')&&(sentence[i]<='Z')){        
  		    sentence[i]+=32; //�[�W32�ܦ��p�g
			}
			else if((sentence[i]>='a')&&(sentence[i]<='z'))
   	 	   sentence[i]-=32; //��32�ܦ��j�g
			}
		cout<<sentence <<"\n" ;
	}
	return 0;
}
    
