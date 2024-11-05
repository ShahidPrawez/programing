#include<iostream>
using namespace std;
int main(){
    int a=2, b=3;
    int r= a++ + ++b + a;
    cout<<r<<endl;
    return 0;
}