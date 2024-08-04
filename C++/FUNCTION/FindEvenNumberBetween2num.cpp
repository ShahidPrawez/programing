#include<iostream>
using namespace std;
bool odd(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    for(int i=1;i<=b;i++){
    if(odd(i)){ 
        cout<<i<<" ";
    }
    }
    return 0;
}