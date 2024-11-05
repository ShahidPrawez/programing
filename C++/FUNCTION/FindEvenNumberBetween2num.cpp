#include<iostream>
using namespace std;
bool even(int n){
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
    for(int i=a;i<=b;i++){
    if(even(i)){ 
        cout<<i<<" ";
    }
    }
    return 0;
}