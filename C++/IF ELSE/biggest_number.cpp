#include<iostream>
using namespace std;
int main(){
    int a,b,c,bigg = 0;
    cout<<"enter three number : ";
    cin>>a>>b>>c;
    if(a>bigg)
    bigg = a;
    if(b > bigg)
    bigg = b;
    if(c>bigg)
    bigg = c;
    cout<<"biggest number is : "<<bigg<<endl;

    
}