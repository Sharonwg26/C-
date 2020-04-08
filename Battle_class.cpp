
#include <iostream>
#include "Battle.h"
using namespace std;
player::player(){	
}
player::playername(string n){ //set playernmae
	cin >>n;
	name=n;
}
string player::getname(){ //show playernmae
	return name;
}
void player::sethp(int h){ //set player-hp
	cin >>h;
	hp=h;
}
int player::gethp(){ //show player-hp
	return hp;
}
void player::setatk(int a){ //set player-atk
	cin >>a;
	hatk=a;
}
int player::getatk(){ //show player-hp
	return hatk;
}
player::weapon(string w){ //set weapon
	cin >>w;
	wname=w;
}
string player::getweapon(){ //show weapon
	return wname;
}
void player::setwatk(int){ //set weapon-atk
	cin >>watk;
}
int player::getwatk(){ //show weapon-atk
	return watk;
}
int player::totalatk(){ //set totalatk
	total=hatk+watk; //player-atk+weapon-atk
	return total;
}
enemy::enemy(){
}
enemy::enemyname(string e){
	cin >>e;
	ename=e;
}
string enemy::getname(){
	return ename;	
}
void enemy::sethp(int eh){ //set enemy-hp
	cin >>eh;
	ehp=eh;
}
int enemy::gethp(){ //show enemy-hp
	return ehp;
}
void enemy::setatk(int ea){ //set enemy-atk
	cin >>ea;
	eatk=ea;
}
int enemy::getatk(){ //show enemy-atk
	return eatk;
}
enemy::dropitem(string d){ //set dropitem
	cin >>d;
	drop=d;
}
string enemy::getdropitem(){ //show dropitem
	return drop;
}


