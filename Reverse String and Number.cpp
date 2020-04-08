/*****************************************
* Assignment 8
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include <iostream> //引用函數庫 
#include <cstring>
 //引用函數庫 
using namespace std;

string ReverseString(string);
void ReverseInts(int[], int length);
void swap(int* a, int* b);

int main(){
    int casesLen=0;
    cin >>casesLen;
    for(int caseNum=0;caseNum<casesLen;caseNum++){
        string feature("");
        cin >>feature;
        if(feature=="sentence"){
            string sentence("");
            getline(cin,sentence); //去除多餘的換行 get rid of "\n"
            getline(cin,sentence);
            cout <<ReverseString(sentence) <<endl;
        }
        if(feature=="numbers"){
            int num=0;
            cin >>num;
            int nums[num]={}; 
            for(int i=0;i<num;i++){
                cin >>nums[i];
            }
            ReverseInts(nums, num);
            for(int i=0;i<num;i++){
                cout <<nums[i] <<" ";
            }
            cout <<endl;
        }
    }
    return 0; //結束程式，嘿嘿嘿 
}
string ReverseString(string sentence){
	string s(sentence.rbegin(),sentence.rend()); //反轉字串 
    return s; 
}
void ReverseInts(int numbers[],int length){ //反轉字串 
	for(int i=0;i<length/2;i++)
	swap(numbers[i],numbers[length-i-1]);
}
void swap(int*a, int*b){ //Swap 
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

