#include <iostream> //Call lib
using namespace std; 

void Sort(int *arr,int len){ //InsertionSort len=size
    for(int i=1;i<len;i++){
		int num=arr[i],j=i-1; 
        while(j>=0&&num<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=num;
    }
}
void Print(int *arr,int len){ //PrintArray
    for(int i=0;i<len;i++){
        cout <<arr[i] <<" ";
    }
    cout <<"\n";
}
int Search(int arr[],int len,int m){ //binarysearch m=search numbrer
    int left=0,right=len-1;
    while (left<=right){
        int mid=(left+right)/2; //Cut half
        if(arr[mid]==m){ //If there is, output position.
            return mid;
        }
        else if(arr[mid]>m){
            right=mid-1;
        }
        else if(arr[mid]<m){
            left=mid+1;
        }
    }
    return -1;
}

int main(){
	int a=0,n=0; //Init
	cout <<"Input a number of data: "; 
	cin >>a;
	int array[a]={}; //set array
	cout <<"Unsort: ";
	for(int i=0;i<a;i++){
        cin >>array[i];
    }
	cout <<"Sorted: ";
	Sort(array,a); 
	Print(array,a);
	cout <<"Want to find: ";
	while(cin >>n){
		(Search(array,a,n)==-1)?cout <<"The target number is not in the array.":cout <<"The target number is at the index " <<Search(array,a,n);		
		cout <<"\nWant to find: ";
	}
}
