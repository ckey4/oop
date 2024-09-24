// abca  bc
#include<iostream>
using namespace std;
class unique{
private:
    string s;
public:
    void Find(string str);
    void display(){
        cout<<"unique word: ";
        int n=s.length();
        for(int i=0;i<n;++i){
            cout<<s[i]<<" ";
        }
    }
};
void unique :: Find(string str){
    int n=str.length();
    int arr[26]={0};
    for(int i=0;i<n;++i){
        arr[str[i]-'a']++;
    }
    for(int i=0;i<n;++i){
        if(arr[str[i]-'a']==1){
            s+=str[i];
        }
    }
} 
int main(){
    class unique a;
    string str;
    cout<<"enter string";
    getline(cin,str);
    a.Find(str);
    a.display();
}