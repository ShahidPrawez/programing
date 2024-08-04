#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int result=1;
    for(int i=1;i<=b;i++){
        result*=a;
    }
    cout<<"rase to the power : ";
    cout<<result<<endl;
}