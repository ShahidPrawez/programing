#include<iostream>
using namespace std;
int funtion(int &a, int &b, int &c){//refrence variable
    a*=2;
    b*=2;
    c*=2;
}
int main(){
    int a=2,b=4,c=5;
    funtion(a,b,c);
    cout<<"a = "<<a<<"  b = "<<b<<"  c = "<<c<<endl;
}