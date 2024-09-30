#include<iostream>
using namespace std;
class area{
    int triangle,square,rectangle;
public:
    void calculate_area(int b,double h){
        triangle=0.5*b*h;
    }
    void  calculate_area(int a){
        square=a*a;
    }
    void  calculate_area(int l,int b){
        rectangle=l*b;
    }
    void display(){
        cout<<"rect:"<<rectangle<<endl<<"squ:"<<square<<endl;
        cout<<"tri: "<<triangle<<endl;
    }
};
int main(){
    area a;
    a. calculate_area(2,3.0);
    a. calculate_area(4);
    a. calculate_area(2,3);
    a.display();
}