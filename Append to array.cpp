/*****************************************
* Exercise  8
* Name:¯Î°a´A 
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include<iostream>
#include <cstring>
using namespace std;

void printArray(int arr[],int lenght){ //Print out array
	for (int i= 0; i<lenght; i++)
		cout <<arr[i] <<" ";
	cout <<endl;
}
void append(int arr[],int length,int data){
	int *prt=arr;
  	for(int i=0;i<length-1;i++){ //The array moves forward
   	    arr[i]=prt[i+1];
   }
    arr[length-1]=data; //the cout input is to the last of the array
	printArray(arr,length);
}
void append(int arr[],int length,int data,int index){ //Enter a seat, a number and replace the original number
  	int *prt=arr;
	  for(int i=5;i>index;i--){ 
   	    arr[i]=prt[i-1];
   }
   arr[index]=data;
	printArray(arr,length);
}
int main(){
	int len=5;
	int arry[len] ={1,3,5,7,9};
	printArray(arry,len);
	while (true){
		int input,pos;
		cout <<"input, position: ";
		cin >>input >>pos;
		if (input==-1) break;
		if (pos<0||pos>=len)
			append(arry,len,input);
		else
			append(arry,len,input,pos);
		cout <<"===================================" <<endl ;
		}
	return 0; //µ²§ôµ{¦¡¡A¼K¼K¼K 
}
