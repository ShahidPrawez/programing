#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number : ";
    cin>> n;
    if (n>= 0)
    {
        cout<<"the absoulet value  is :"<<n<<endl;
    }
    if (n < 0)
    {
        n =n*(-1);
        cout<<"the absoulet value  is : " << n <<endl;
    } 
    return 0;
}