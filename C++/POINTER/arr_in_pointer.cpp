#include<iostream>
using namespace std;
int main (){

    int var[5]={1,2,3,4,5};
    int* ptr =var;
    cout<<ptr[0]<<endl<<ptr[1]<<endl;
    cout<<var <<endl;
    return 0;
}