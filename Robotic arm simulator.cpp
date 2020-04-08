/*****************************************
* Exercise 6 
* Name: 翁軒媚
* Student Number: 107502550
* Course: 2018-CE1003-B
******************************************/
#include<iostream>
using namespace std;

int n1=0,n2=0,n3=0,n4=0,n5=0,i=0,j=0;
int Con[6][6]={};
int Work[2][2]={};

void explanation(){ //Top explanation
	cout <<"Robotic arm simulator Program.\n\
Choose your Operation (1~8):\n\
1. Input material to Container.\n\
2. Move material to Workbench from Container.\n\
3. Back material to Container from Workbench.\n\
4. Change the box's position in Container.\n\
5. Output material from Container.\n\
6. Gathering the boxes.\n\
7. Show Container and Workbench inside.\n\
8. Quit the program.\n";
}
void input(int n1,int n2){ //input 
    if(n1>6){ 
		cout <<n1 <<" is larger than Container Vertical size.\n";
		} 
    else if(n2>6){ 
		cout <<n2 <<" is larger than Container Horizontal size.\n";
		} 
    else if(Con[n1-1][n2-1]==0){
        Con[n1-1][n2-1]++;
        		cout <<"Successfully input material to Container " <<n1 <<" " <<n2 <<".\n";	
    }
    else if(Con[n1-1][n2-1]>0){ 
        cout <<"Container " <<n1 <<" " <<n2 <<" already be occupied.\n";
        } 
}
void move(int n1,int n2,int n3,int n4){ //move
    if(n1>6){ 
        cout <<n1 <<" is larger than Container Vertical size.\n";
        } 
    else if(n2>6){ 
        cout <<n2 <<" is larger than Container Vertical size.\n";
        } 
    else if(n3>2){ 
        cout <<n3 <<" is larger than Workbench Vertical size.\n";
        } 
    else if(n4>2){ 
        cout <<n4 <<" is larger than Workbench Vertical size.\n";
        } 
    else if(Con[n1-1][n2-1]==0){ 
        cout <<"Container " <<n1 <<" "<<n2 <<" is empty.\n";
        } 
    else if(Work[n3-1][n4-1]>0){ 
        cout <<"Workbench " <<n3 <<" " <<n4 <<" is already be occupied.\n";
        } 
    else if (Work[n3-1][n4-1]==0&&Con[n1-1][n2-1]>0){
        Work[n3-1][n4-1]++;
        Con[n1-1][n2-1]--;
        cout <<"Successfully move material from Container " <<n1 <<" " <<n2 <<" to Workbench " <<n3 <<" " <<n4 <<"\n";
    }
    cout<<"\n";
}
void back(int n1,int n2,int n3,int n4){ //back
    if(n1>6){
        cout <<n1 <<" is larger than Container Vertical size.\n";    	
	}
    else if(n2>6){
        cout <<n2 <<" is larger than Container Vertical size.\n";    	
	}
    else if(n3>2){
        cout <<n3 <<" is larger than Workbench Vertical size.\n";    	
	}
    else if(n4>2){
        cout <<n4 <<" is larger than Workbench Vertical size.\n";    	
	}
    else if(Con[n1-1][n2-1]>0){
        cout <<"Container " <<n1 <<" " <<n2 <<" is already be occupied.\n";    	
	}
    else if(Work[n3-1][n4-1]==0){
        cout <<"Workbench " <<n3 <<" " <<n4 <<"is empty.\n";    	
	}
    else if(Con[n1-1][n2-1]==0&&Work[n3-1][n4-1]>0){
        Con[n1-1][n2-1]++;
        Work[n3-1][n4-1]--;
        cout <<"Successfully back material from Workbench " <<n3 <<" " <<n4 <<" to Container "<<n1 <<" " <<n2 <<"\n";
    }
}
void change(int n1,int n2,int n3,int n4){ //change
    if(n1>6){
        cout <<n1 <<" is larger than Container Vertical size.\n";    	
	}
    else if(n2>6){
         cout <<n2 <<" is larger than Container Vertical size.\n";  	
	}
    else if(n3>6){
        cout <<n3 <<" is larger than Container Vertical size.\n";    	
	}
    else if(n4>6){
        cout<<n4<<" is larger than Container Vertical size.\n";    	
	}
    else if (Con[n3-1][n4-1]>0){
        cout <<"Container " <<n3 <<" " <<n4 <<" already be occupied.\n";    	
	}
    else if (Con[n1-1][n2-1]==0){
        cout <<"Container " <<n1 <<" " <<n2 <<" is empty.\n";    	
	}
    else if ((Con[n1-1][n2-1]>0)&&(Con[n3-1][n4-1]==0)){
        Con[n1-1][n2-1]--;
        Con[n3-1][n4-1]++;
        cout <<"Successfully change material from Container " <<n1 <<" " <<n2 <<"to Container " <<n3 <<" " <<n4<<".\n";
    }
}
void output(int n1,int n2){ //output
    if(n1>6){ 
        cout <<n1 <<" is larger than Container Vertical size.\n";
    }
    else if(n2>6){
        cout <<n2 <<" is larger than Container Vertical size.\n";	
	}
    else if (Con[n1-1][n2-1]>>0){
        Con[n1-1][n2-1]--;
        cout <<"Successfully output material from  Container " <<n1 <<" " <<n2 <<"\n";
    }
    else if (Con[n1-1][n2-1]==0){
		 cout <<"Container "<<n1 <<" " <<n2<<" is empty.\n";    	
	}
}
void gather(){  //gather
    int Counter=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++)
            if (Con[i][j]>0){
                Counter ++;
                Con[i][j]--;
            }
    }
    if(Counter==0){ 
        cout<<"Container all is empty.\n";
        } 
    else if(Counter>0){
        for(i=0;i<6;i++){
            for(j=0;j<6;j++){
			if (((6*i)+j)<Counter)
                    Con[i][j]++;
			}
		}
	}
}
void show(){  //show XXOO
	cout <<"Container :\n";                               
	for (i=0;i<6;i++){
			 for (j=0;j<6;j++){ 
				if (Con[i][j]==0){
                     cout <<"X";					
				}
				else{ 
				cout <<"O" ;
				} 
		}      
	cout <<"\n";
    }
	cout <<"\nWorkbench :\n";                             
	for (i=0;i<2;i++) {
			 for (j=0;j<2;j++) { 
				if (Work[i][j]==0){
					cout <<"X";						
				}
				else{
				cout <<"O";
				} 
		}
	cout <<"\n";
    }
}
int main(){
	int a=0,x=0,y=0,w1=0,w2=0; //初始化 
	while(n1<=8){
		explanation();
		cin >>a >>x >>y >>w1 >>w2;
		if(a==1){
			input(x,y);
		}		
		if(a==2){		
			move(x,y,w1,w2);
		}
		if(a==3){
			back(x,y,w1,w2);
		}	
		if(a==4){
			change(x,y,w1,w2);
		}	
		if(a==5){
			output(x,y);
		}	
		if(a==6){
			gather();
		}		
		if(a==7){
			show();	
		}
		if(a==8){
			show();
			break;
		}
		if(a>8){
			cout <<"Error Function Call.";
			break;
		}
		cout <<"\n";		
	}
	cout <<"\n";
	return 0; //結束程式 
}
