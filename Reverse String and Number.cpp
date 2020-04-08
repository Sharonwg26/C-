/*****************************************
* Assignment 8
* Name: �ΰa�A
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include <iostream> //�ޥΨ�Ʈw 
#include <cstring>
 //�ޥΨ�Ʈw 
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
            getline(cin,sentence); //�h���h�l������ get rid of "\n"
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
    return 0; //�����{���A�K�K�K 
}
string ReverseString(string sentence){
	string s(sentence.rbegin(),sentence.rend()); //����r�� 
    return s; 
}
void ReverseInts(int numbers[],int length){ //����r�� 
	for(int i=0;i<length/2;i++)
	swap(numbers[i],numbers[length-i-1]);
}
void swap(int*a, int*b){ //Swap 
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

