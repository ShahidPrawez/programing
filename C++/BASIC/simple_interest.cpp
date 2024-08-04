#include<iostream>
using namespace std;
int main()
{
    int r,t,p,si;
    cout<<"enter rate  :";
    cin>>r;
    cout<<"enter time in year :";
    cin>>t;
    cout<<"enter principal amount :";
    cin>>p;
    si = (p*r*t)/100;
    cout<<"simpal interest is :"<<si<<endl;
    return 0;
}