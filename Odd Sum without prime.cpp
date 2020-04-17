#include <iostream>
using namespace std;

int main(void){
	int a=0,b=0,c=0,n=0,s=0;
    cin >>c;
	for(int i=0;i<c;i++){
        cin>>a>>b;
        s=0;
        for(n=a;n<=b;n++){
        	if(n%2!=0){
        		for(int i=2;i<=n/2;i++){
					if(n%i==0){
						s=s+n;
						break;	
					}		
				}
				
			}
		}
		cout<<s<<"\n";		
    }
	return 0;
}
