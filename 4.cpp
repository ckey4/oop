#include <iostream>
using namespace std;
class Index{
    int n;
    int arr[];
    public:
    Index(int n,int arr[]){
        int max=0;
        for(int i=0;i<n;++i){
        int sum=0;
        int g=1;
        int index =i;
        while(index<n){
            if(g+index>n){
                break;
            }
            int s=0;
            for(int i=0;i<g;++i){
                s=s+arr[index];
                index++;
            }
            sum=sum+s;
            g++;
        }
        if(max<sum){
            max=sum;
        }
    }
    cout<<max;
    }
};
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i]; 
    }
    Index a1(n,a);
}
// 2 1 3 9 2 4 -10 -9 1 3