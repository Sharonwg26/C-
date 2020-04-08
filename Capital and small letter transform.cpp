/*****************************************
* Exercise 7 
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include<iostream>
#include <string>
using namespace std;

int main(){
	int num=0,i=0,e=0; //初始化 
	cin >>num; //輸入 
	string sentence;
	getline(cin,sentence);  
	for (e=num;e>0;e--){ //迴圈 
	getline(cin,sentence);
    	for(i=0;i<sentence.length();i++){
    		if((sentence[i]>='A')&&(sentence[i]<='Z')){        
  		    sentence[i]+=32; //加上32變成小寫
			}
			else if((sentence[i]>='a')&&(sentence[i]<='z'))
   	 	   sentence[i]-=32; //減32變成大寫
			}
		cout<<sentence <<"\n" ;
	}
	return 0;
}
    
