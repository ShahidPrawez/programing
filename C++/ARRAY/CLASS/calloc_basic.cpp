#include<iostream>
using namespace std;
int main(){
    int* ptr=(int*)calloc(10,4);
    cout<<*ptr<<endl;// zero
}