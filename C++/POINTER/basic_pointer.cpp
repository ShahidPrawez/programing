#include<iostream>
using namespace std;
int main (){
    int a =10;
    a=20;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    return 0;
}