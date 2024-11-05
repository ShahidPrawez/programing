#include<iostream>
#define clrscr() system("cls")
using namespace std;
int main(){
    int a=0,b=1,c,n,i=1;
    cout<<"Enter number: ";
    cin>>n;
    if(n==1){
        cout<<" "<<a<<endl;
    }
    else if(n==2){
        cout<<" "<<a<<" "<<b<<endl;
    }
    else if(n>2){
        cout<<" "<<a<<" "<<b;
        while(i<=n-2){
            c=a+b;
            cout<<" "<<c;
            a=b;
            b=c;
            i++;

        }
    }
    

}