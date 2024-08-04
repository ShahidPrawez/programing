#include<iostream>
using namespace std;
int main(){
    int num,total=0;
    cout<<"Enter number : ";
    cin>>num;
    while(num>0){
        num =num/10;
        total++;
    }
    cout<<"Entered number is : "<<total<<endl;
}