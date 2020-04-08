
#include <iostream>
#include <string>
#include <cmath>
#include "Battle_class.h"
using namespace std;
int main(){	
    player hero;
	enemy enemy;
	int hhp=0,hatk=0,watk=0,ehp=0,eatk=0,choose=0,sethup,seteup,a=0;
    string hname,wname,ename,dropitem;
	cout <<"Please Create a hero:\nName: ";
	hero.playername(hname);
    cout <<"Hp: ";
	hero.sethp(hhp);
    cout <<"Atk: ";
	hero.setatk(hatk);
    cout <<hero.getname() <<"'s Weapon: ";
    hero.weapon(wname);
    cout <<hero.getname() <<"'s Weapon Atk: ";
	hero.setwatk(watk);
	cout <<"\nPlease Create an enemy:\n";
    cout <<"Name: ";
	enemy.enemyname(ename);
    cout <<"Hp: ";
	enemy.sethp(ehp);
    cout <<"Atk: ";
	enemy.setatk(eatk);
	cout <<"DropItem: ";
	enemy.dropitem(dropitem);
	cout <<"===============\n\n";
	sethup=hero.gethp();
	seteup=enemy.gethp();
	do{
		cout <<"A Wild " <<enemy.getname() <<" appeared!\n";
		seteup=enemy.gethp();		
		do{				
       		if(sethup>0&&seteup>0){
			   cout <<"What will " <<hero.getname() <<" do?\n";
				cout <<hero.getname() <<"'s Hp: " <<sethup <<"\n";
				cout <<enemy.getname() <<"'s Hp: " <<seteup <<"\n";	
			}		
       		if(choose==1&&sethup>0&&seteup<=0){
				seteup=seteup-hero.getatk()-hero.getwatk();
				cout <<hero.getname() <<" use " <<hero.getweapon() <<" and hurt " <<enemy.getname() <<" " <<hero.totalatk() <<" points.\n";	
				cout <<hero.getname() <<" win!\n" <<hero.getname() <<" dropped item \"" <<enemy.getdropitem() <<"\" left on the ground.\nWant another adventure?\n1. Yes 2. No\n";	
				cin >>a;
				break;  
			}		 
			if(sethup<=0&&seteup>0){
				sethup=sethup-enemy.getatk();
				seteup=seteup-hero.getatk()-hero.getwatk();
				cout <<enemy.getname() <<" win!\n" <<hero.getname() <<"'s weapon \"" <<hero.getweapon() <<"\" left on the ground.\nGame Over";	
				break;
			}
			cout <<"1.Attack 2.Do nothing\n";
			cin >>choose;
			if(choose==1&&sethup>0&&seteup<=0){
				seteup=seteup-hero.getatk()-hero.getwatk();
				cout <<hero.getname() <<" use " <<hero.getweapon() <<" and hurt " <<enemy.getname() <<" " <<hero.totalatk() <<" points.\n";	
				cout <<hero.getname() <<" win!\n" <<hero.getname() <<" dropped item \"" <<enemy.getdropitem() <<"\" left on the ground.\nWant another adventure?\n1. Yes 2. No\n";	
				cin >>a;
				break;  
			}		 
			else if(sethup<=0&&seteup>0){
				sethup=sethup-enemy.getatk();
				seteup=seteup-hero.getatk()-hero.getwatk();
				cout <<enemy.getname() <<" win!\n" <<hero.getname() <<"'s weapon \"" <<hero.getweapon() <<"\" left on the ground.\nGame Over";	
				continue;
			}
			else if(choose==1&&sethup>0&&seteup>0){
				seteup=seteup-hero.getatk()-hero.getwatk();
				sethup=sethup-enemy.getatk();
        		cout <<hero.getname() <<" use " <<hero.getweapon() <<" and hurt " <<enemy.getname() <<" " <<hero.totalatk() <<" points.\n";		
				cout <<enemy.getname() <<" hurt " <<hero.getname() <<" " <<enemy.getatk() <<" points.\n";				
			}
			else if(choose==2&&seteup>0&&sethup>0){
				sethup=sethup-enemy.getatk();
        		cout <<hero.getname() <<" is doing nothing.\n";
				cout <<enemy.getname() <<" hurt " <<hero.getname() <<" " <<enemy.getatk() <<" points.\n";			
			}		      		      							  									     		
		}while(hhp<=0||ehp<=0);
	}while(a!=2);
	cout<<"Game Over";
    return 0; //µ²§ôµ{¦¡¡A¼K¼K¼K 
}
