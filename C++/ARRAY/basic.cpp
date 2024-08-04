#include<iostream>
using namespace std;
int main(){
    int a[2]={10,20};
    int*b[1];
    cout<<b<<endl;
    
    cout<<*&b<<endl;
    cout<<a[0]<<endl;
    cout<<a[1];
    cout<<endl;
    return 0;
}