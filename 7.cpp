#include <iostream>
using namespace std;
class bank{
    string name,type;
    int ano,balance;
public:
    void set(int a,int b,string c,string d){
        name=c;
        type=d;
        ano=a;
        balance=b;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<"balance"<<balance<<endl;
    }
    void deposit(int a){
        balance+=a;
        display();
    }
    void withdraw(int a){
        if(a>balance){
            cout<<"No enough Money";
        }
        else{
            balance-=a;
        }
        display();
    }
    
};
int main(){
    bank b;
    int v;
    string name,type;
    int ano,balance;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter Acc no: ";
    cin>>ano;
    cout<<"enter type: ";
    cin>>type;
    cout<<"enter balance: ";
    cin>>balance;
    int n;
    b.set(ano,balance,name,type);
    cout<<"press 1 for  deposit"<<endl<<"press 2 for withdraw";
    cin>>n;
    switch (n){
        case 1:
            cout<<"enter money to be deposit";
            cin>>v;
            b.deposit(v);
            break;
        case 2:
            cout<<"enter moneey to withdraw: ";
            cin>>v;
            b.withdraw(v);
            break;
    }
   // b.display();
}