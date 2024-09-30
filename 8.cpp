#include<iostream>
using namespace std;
class student{
    int score[5];
public:
    int sum=0;
    void input(int n,int a[]){
        for(int i=0;i<5;++i){
            score[i]=a[i];
        }
    }
    int cal(int a[5]){
        for(int i=0;i<5;++i){
            sum+=a[i];
        }
        return sum;
    }
};
int main(){
    student a;
    int score[5];
    int n=5;
    for(int i=0;i<n;++i){
        cin>>score[i];
    }
    a.input(n,score);
    int total=a.cal(score);
    cout<<total;
}
