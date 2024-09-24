#include <bits/stdc++.h>
using namespace std;
class specific{
private:
    string str;
public:
    void setstr(string str1){
        int n=str1.length();
        for(int i=0;i<n;++i){
            if(str1[i]=='t'){
                continue;
            }
            str+=str1[i];
        }
    }
    void getstr(){
        cout<<"update string: "<<str;
    }
};
int main(){
    specific a;
    a.setstr("computer science is the future");
    a.getstr();
}