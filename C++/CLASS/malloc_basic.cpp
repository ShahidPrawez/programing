#include<iostream>
using namespace std;
int main(){
    int* ptr=(int*)malloc(10*4);
    cout<<*ptr<<endl;// garvage value
}