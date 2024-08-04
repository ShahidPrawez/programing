#include<iostream>
using namespace std;
int main(){
    int n,f=0;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f=1;
        }
    }
    if(f==1){
        cout<<"not prime number";
    }
    else{
        cout<<"prime number";
    }
}