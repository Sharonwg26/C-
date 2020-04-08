
#ifndef Battle_H
#define Battle_H
#include <string>
using namespace std;

class player{
public:
	player();
    playername(string);
	weapon(string);
    string getname();
    string getweapon();
    void sethp(int);
    void setatk(int);
    void setwatk(int);
    void setup();
	int totalatk();
	int gethp();
    int getatk();
    int getwatk();
    int getup();
private:
    string name;
    string wname;
    int hp=0,hatk=0,watk=0,total=0;
};
class enemy{
public:
	enemy();
    enemyname(string);
    dropitem(string);
    string getname();
    string getdropitem();
	void sethp(int);
    void setatk(int);
    int gethp();
    int getatk();
private:
    string ename;
    string drop;
    int ehp=0,eatk=0;
};

#endif
