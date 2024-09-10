#include <iostream>
#include<cmath>
using namespace std;
class charges{
private:
    string name;
    float cost = 0;
public:
    charges(string name,float unit){
        this->name=name;
        if(unit > 300){
            int chargeable = unit - 300;
            unit = 300;
            cost += (chargeable * 90)/100;
        }
        if(unit > 100){
            int chargeable = unit - 100;
            unit = 100;
            cost += (chargeable * 80)/100;
        }
        cost =cost + (unit * 60)/100 + 50;
        if(cost>300){
            cost=cost+cost*0.15;
        }
    }
    void display(){
        cout<<name<<endl;
        cout<<ceil(cost)<<"\n";
    }   

};
int main(){
    float unit;
    string name;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter unit: ";
    cin>>unit;
    charges obj(name,unit);
    obj.display();
}