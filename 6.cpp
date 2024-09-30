#include<iostream>
using namespace std;
class Hotel{
    int rno,tariff,NOD;
    string name;
    int CALC(int NOD,int tariff){
        int a=NOD*tariff;
        if(a>10000){
            a=a*1.05;
        }
        return a;
    }
public:
    void checkin(int Rno,string name,int tariff,int NOD){
        this->rno=Rno;
        this->name=name;
        this->tariff=tariff;
        this->NOD=NOD;
    }
    void checkout(){
        cout<<"Rno: "<<rno<<endl<<"Name: "<<name<<endl;
        cout<<"tariff: "<<tariff<<endl<<"NOD: "<<NOD<<endl;
        int amount;
        amount=CALC(NOD,tariff);
        cout<<"amount: "<<amount;
    }
};
int main(){
    Hotel h1;
    int rno,tariff,NOD;
    string name;
    cout<<"enter rno: ";
    cin>>rno;
    cout<<"enter per day charge: ";
    cin>>tariff;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter nod: ";
    cin>>NOD;
    h1.checkin(rno,name,tariff,NOD);
    h1.checkout();
}