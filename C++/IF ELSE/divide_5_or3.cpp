#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number : ";
    cin>> n;
    if (n % 5 == 0 ||  n % 3 == 0)
    {
        cout<<"the number is divided by 5 or 3"<<endl;
    }
    else
    {
        cout<<"the number is not divided by 5 or 3"<<endl;
    } 
    return 0;
}