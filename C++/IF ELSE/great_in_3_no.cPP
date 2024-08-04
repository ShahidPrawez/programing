#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enret first number : ",
    cin>>a;
    cout<<"enret second number : ",
    cin>>b;
    cout<<"enret third number : ",
    cin>>c;
    if (a>b && a>c)
    {
       cout<<"this is greater number : "<<a<<endl;
    }
    else if (b>a && b>c)
    {
       cout<<"this is greater number : "<<b<<endl;
    }
    else if (c>a && c>b)
    {
       cout<<"this is greater number : "<<c<<endl;
    }
    else 
    {
        cout<<"please enter correct input";
    }
    return 0;
}