#include<iostream>
#include<cmath>
using namespace std;


int Gauss(int a){
    if(a>=1){
        return a+Gauss(a-1);
    }
    if(a<=-1){
        return a+Gauss(a+1);
    }
    if(a==0){
        return a;
    }
}

double Triangle(double x,double y){
    return (x*y)/2;
}

int GCD(int a,int b){
	if(b==0)	return a;
	else return GCD(b,a%b);
}

int main(){
    double n1,n2;
    char x;
    while(true){
        cin >>n1 >>x >>n2;
        if(x=='q')
        break;
        switch(x){
        case'+':
            cout <<n1+n2 <<"\n";
            break;
        case'-':
            cout <<n1-n2 <<"\n";
            break;
        case'*':
            cout <<n1*n2 <<"\n";
            break;
        case'/':
            n2!=0?cout<<n1/n2 <<"\n":cout<<"Nan\n";
            break;
        case '^':
            cout <<pow(n1,n2) <<"\n";
            break;
        case'g':
        	if(n1>n2){
        		swap(n1,n2);
			}
            if(((n1-(int)n1)!=0)||((n2-(int)n2)!=0))
                cout << "Error" <<"\n";
            else if((n2>=n1)&&(n2>=0&&n1>=0)){
                cout <<Gauss(n2)-Gauss(n1)+n1 <<"\n";
            }
            else if((n2>=n1)&&(n2>=0&&n1<=0)){
                cout <<Gauss(n1)+Gauss(n2) <<"\n";
            }
            else if((n2>=n1)&&(n2<=0&&n1<=0)){
                cout <<Gauss(n1)-Gauss(n2)+n2 <<"\n";
            }
            break;
        case 't':
            ((n1<=0)||(n2<=0))?cout<<"Error\n":cout<<Triangle(n1,n2) <<"\n";
        	break;
        case'c':
                if(((n1-(int)n1)!=0)||((n2-(int)n2)!=0)||(n1<=0)||(n2<=0)){
                    cout << "Error\n";
                 }
                else if(GCD(n1,n2)==1)
                    cout <<"True\n";
                else if(GCD(n1,n2)!=1)
                    cout <<"False\n";         
            break;
        }
    }
    return 0;
}
