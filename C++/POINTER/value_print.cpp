#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int *ptr;
    ptr = a;
     for(int i = 1; i <4; i++){
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        ptr++;
     }
    return 0;
}