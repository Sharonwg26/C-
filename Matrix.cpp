#include <iostream> //引用函數庫 
#include <string>
using namespace std;

class Matrix{
	public:		
		void change(int a,int b,int c);	//change
		void display3(); //output the diagonal of the matrix
		void display4(); //output the matrix
		int_sum(); //determinant
	private:
		int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //set array
};
Matrix::int_sum(){
	int sum;
	sum=arr[0][0]+arr[0][1]+arr[0][2]+arr[1][0]+arr[1][1]+arr[1][2]+arr[2][0]+arr[2][1]+arr[2][2];
	return sum;
}
void Matrix::change(int a,int b,int c){
	arr[a][b]={c};	
}
void Matrix::display3(){
	int t;
	for (int i=0;i<3;i++){
		for (int j= 0;j<i;j++){
			t=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=t;
		}
	}	
}
void Matrix::display4(){
for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout <<arr[i][j] <<" ";
		}
		cout <<"\n";
	}
	cout <<"\n";	
}

int main(void){
	Matrix mat;
	int sum,choose,x,y,v;
	while(choose!=-1){
		cout <<"please input operation :\n";
		cin >>choose;
		if(choose==1){
			cout <<"please input coordinate and value :\n";
			cin >>x >>y >>v;
			mat.change(x,y,v);			
		}
		if(choose==2){
			sum=mat.int_sum();
			cout <<sum <<"\n";
		}			
		if(choose==3){
			mat.display3();
		}
		if(choose==4){
		mat.display4();
		}
	}
	return 0; //結束程式，嘿嘿嘿 
}
