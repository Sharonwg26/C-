#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <fstream>
using namespace std;
#define LongOfChar 100  
class Player{
   private:
   int dan; 
   public :
   char  name[LongOfChar];
   int mikeScore;
   public:  
    Player(){
        dan=0;
        mikeScore=0;
     }
     void setDan(int da){
     dan=da;
     }
     int getDan(){
         return dan;
     }
};
class CompGreater
{
public:
    bool operator ()(const Player& pstItem1, const Player& pstItem2)
    {
        return pstItem1.mikeScore> pstItem2.mikeScore;
    }
 
};  
 

 class PlayerPair{
    public :
    Player* A_Player;
    Player* B_Player;
    Player* winer_Player; 
};
 

class WeiQiComplete{
    public :
    int numberOfPlayer;  
    int roundOfCompelte;
    int currentCompelte; 
    vector<Player>  mPlayerVetor;
    vector<PlayerPair>  mPlayerPairVetor; 
    public :
    WeiQiComplete(){
       numberOfPlayer=0;
       roundOfCompelte=0;
       currentCompelte=0;
    }

    void printPlayer(){   
        vector<Player>::iterator it;    
            cout << "The In of Player:"<< endl;
        for(it=mPlayerVetor.begin();it!=mPlayerVetor.end();it++){
           cout<<"name:"<<(*it).name<<"  dan:"<<(*it).getDan()<<"  MikeScore:"<<(*it).mikeScore<<endl;
        }
    }

    void inputPlayer(){ 
    if(currentCompelte>0){
        cout<<"the complete has begin,you cannot enter again!";
    }else{
       cout << "Please input the number of player :"<<endl;
       cin>>numberOfPlayer;
       cout << "Please input the round of Compelte :"<<endl;
       cin>>roundOfCompelte;
       cout << "Please input the Info of all Player"<<endl;
       for(int i=0;i < numberOfPlayer; i++){
        Player mPlayer;
        int dan;
        cout << "Please input name of "<< i+1 <<" player :"<<endl;
        cin>>mPlayer.name;
        cout << "Please input dan of "<< i+1 <<" player :"<<endl;
        cin>>dan;
        mPlayer.setDan(dan);
        mPlayer.mikeScore=dan;
         mPlayerVetor.push_back(mPlayer);
      }
    }     
    }
    void sortPlayer(){ 
        sort(mPlayerVetor.begin(), mPlayerVetor.end(), CompGreater());
    }
     
    void makePair(){
        int sizeOfArray=mPlayerVetor.size() / 2;
        for(int i=0;i<sizeOfArray;i++){
            PlayerPair mPlayerPair;
            mPlayerPair.A_Player=&mPlayerVetor[2*i];
            mPlayerPair.B_Player=&mPlayerVetor[2*i+1];
            mPlayerPairVetor.push_back(mPlayerPair);
        }
        if(sizeOfArray*2 < mPlayerVetor.size()){
            mPlayerVetor[mPlayerVetor.size()-1].mikeScore+=0.5;
        }
    }

    void printpair(){  
            cout << "*The Result of the pair*"<< endl;
        for(int i=0;i<mPlayerPairVetor.size();i++){
             cout<< (*(mPlayerPairVetor[i].A_Player)).name<<"   :   "<<(*(mPlayerPairVetor[i].B_Player)).name<<endl;
        }
             cout << "you can enter the result "<< endl;
    }

    void printTheResult(){ 
        for(int i=0;i<mPlayerPairVetor.size();i++){
             cout<< (*(mPlayerPairVetor[i].A_Player)).name<<"  :  "<<(*(mPlayerPairVetor[i].B_Player)).name<< "  Winer is *" <<(*(mPlayerPairVetor[i].winer_Player)).name<<"*"<<endl;
        }
        if(roundOfCompelte==currentCompelte){
            cout<<"The Complete End ! The Sort Of all Payer is --"<<endl;
            sortPlayer();
            printPlayer();
        }
    }
    void inputResult(){  
        for(int i=0;i<mPlayerPairVetor.size();i++){
        int playerid;
        cout<<"please input the result of "<<(*(mPlayerPairVetor[i].A_Player)).name<<" win is 1 ; "<<(*(mPlayerPairVetor[i].B_Player)).name<<" win is 2 "<<endl;
         cin>>playerid;
           if(playerid==1){
               mPlayerPairVetor[i].winer_Player=mPlayerPairVetor[i].A_Player;
               (*(mPlayerPairVetor[i].A_Player)).mikeScore+=1;
           }else{
              if(playerid==2){
                mPlayerPairVetor[i].winer_Player=mPlayerPairVetor[i].B_Player;
                 (*(mPlayerPairVetor[i].B_Player)).mikeScore+=1;
             }  
             else{
                 (*(mPlayerPairVetor[i].A_Player)).mikeScore+=0.5;
                 (*(mPlayerPairVetor[i].B_Player)).mikeScore+=0.5;
             }
           }
        }
    }
};
 

class Login{
    private :
    string  name;
    string  password;
    public:
    void login(){ 
        cout<< "*************************************"<<endl;
        cout<< "           WeiQi System              "<<endl;
        cout<< "*************************************"<<endl;
        cout<< "Please input your name and password :"<<endl;
         input();
        if(login_Verification(name,password)){
            login_success();    
        }else{
            login_error();
        }
    }

    void input(){  
        cout<< "Your name:";
        cin>>name;
        cout<< "Your password:";
        cin>>password;
    }

    bool login_Verification(string  name,string  password){ 
        bool resp=false;
        if(name.compare("li")==0 && password.compare("123")==0){ //Set name and  password
            resp=true;
        }
        return resp;
    }
    void login_success(){ 
        cout<< "Login Success !"<<endl;
    }
    void login_error(){
        cout<< "Your name Or Password is Error!"<<endl;
        login();
    }
};
 
class fileUtil{
    public:
    static void outPutToFile(WeiQiComplete weiQiComplete){ 
        ofstream file;   
        file.open("WeiQiComplete.txt", ios::out | ios::binary | ios::app);   
        file.write((char *)&weiQiComplete,sizeof(WeiQiComplete));  
        file.close();  
    }
    static WeiQiComplete readFromFile(){ 
         WeiQiComplete weiQiComplete;
         ifstream infile;   
         infile.open("WeiQiComplete.txt", ios::in | ios::binary);
         if(infile.is_open()){
             infile.read((char *)&weiQiComplete,sizeof(weiQiComplete)); 
             infile.close();        
             cout << "finish read file " << endl;
         }
         print(weiQiComplete);        
         return  weiQiComplete;    
    }
    static void print(WeiQiComplete weiQiComplete){
             cout <<" have read a  WeiQiComplete Info "<< ":" << &weiQiComplete << endl;
    }
};
 

class Menu{   
    WeiQiComplete mWeiQiComplete;
    public:
    void menu(){
        int select;
        cout<< "******************************************"<<endl;
        cout<< "              WelCome You                 "<<endl;
        cout<< "This is Menu ,you can input the number of list"<<endl;
        cout<< "* 1: Enter The Number of Player And Round "<<endl;
        cout<< "* 2: Start a Round "<<endl;
        cout<< "* 3: Enter The Result Of Round"<<endl;
        cout<< "* 4: Print The Sort Of Player"<<endl;
        cout<< "* 5: Save to the file"<<endl;
        cout<< "* 6: read  the file"<<endl;
        cout<< "* 7: Back "<<endl;
        cout<< "******************************************"<<endl;
        
        cin>>select;
        switch(select){
            case 1:
            enterInfo();
            break;
            case 2:
            startRound();
            break;
            case 3:
            inputResultOfRound();
            break;
            case 4:
            printSort();
            break;
            case 5:
            SaveToFile();
            break;
            case 6:
            ReadFromFile();
            break;
            case 7:
            exit(0);
            break;
        }
    }
    void enterInfo(){ 
        mWeiQiComplete.inputPlayer();
        mWeiQiComplete.printPlayer();
        mWeiQiComplete.sortPlayer();
        
        menu();
    }
    void startRound(){  
        if(mWeiQiComplete.numberOfPlayer <= 0 || mWeiQiComplete.roundOfCompelte<=0){
            cout <<"Please Enter the Info About Player and Compelte!"<<endl;
            menu();
        }
        else{
            if(mWeiQiComplete.roundOfCompelte <= mWeiQiComplete.currentCompelte){
                    cout <<"The Compelte Has Finish¡I"<<endl;
                    menu();
            }
            else{
             mWeiQiComplete.currentCompelte = mWeiQiComplete.currentCompelte + 1;
             cout <<"you will begin the  * "<<mWeiQiComplete.currentCompelte<<"  * round "<<endl;
             mWeiQiComplete.makePair();
             mWeiQiComplete.printpair();
             menu();                
            }
        }
    }
    void printSort(){ 
        mWeiQiComplete.printPlayer();
        menu();
    }
    void inputResultOfRound(){ 
        mWeiQiComplete.inputResult();
        mWeiQiComplete.printTheResult();
        menu();
    }
    void SaveToFile(){ 
        fileUtil::outPutToFile(mWeiQiComplete);
        menu();
    }
    void ReadFromFile(){ 
        mWeiQiComplete=fileUtil::readFromFile();
        menu();
    }
};

int main(){
    Menu  mMenu;  
    Login mLogin;
    mLogin.login();
    mMenu.menu();
    return 0;
} 
