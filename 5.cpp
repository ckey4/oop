#include<iostream>
using namespace std;
class emp{
    string name;
    int id;
public:
    emp(string name,int id){
        this->name=name;
        this->id=id;
    }
    void display(){
        cout<<"name: "<<name<<" ";
        cout<<"id: "<<id<<endl;
    }
};
int main(){
    emp a("chetan",34);
    emp b("kashniyal",36);
    a.display();
    b.display();
}