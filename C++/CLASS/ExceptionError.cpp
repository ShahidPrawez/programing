// jab ham koi number ko -> o se divid kre 
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a,b,r;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    try{
        if(b!=0){
        r=a/b;
        cout<<"result : "<<r<<endl;
        }
        else throw(b);
    }
        catch (int number){
        cout<<"Divid by -> 0 is not allow"<<endl;
    }
   
    return 0;
}